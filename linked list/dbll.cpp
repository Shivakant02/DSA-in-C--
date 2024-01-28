#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
};
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertAtbeg(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertatindex(int index, Node *&head, int d)
{
    if (index == 1)
    {
        insertAtbeg(head, d);
        return;
    }
    Node *p = head;
    Node *temp = new Node(d);
    int i = 2;
    while (i < index)
    {
        p = p->next;
        i++;
    }
    if (p->next == NULL)
    {
        p->next = temp;
        temp->prev = p;
    }
    else
    {

        temp->next = p->next;
        p->next->prev = temp;
        p->next = temp;
        temp->prev = p;
    }
}
void deletenode(int index, Node *&head)
{
    Node *curr = head;
    Node *prev = NULL;
    if (index == 1)
    {
        head = head->next;
        curr->next = NULL;
        head->prev = NULL;
        delete (curr);
    }
    else
    {
        for (int i = 1; i < index; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        if (curr->next != NULL)
        {
            prev->next = curr->next;
            curr->next->prev = prev;
            curr->prev = NULL;
            curr->next = NULL;
            delete (curr);
        }
        else
        {
            prev->next = NULL;
            curr->prev = NULL;
            delete (curr);
        }
    }
}
int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtbeg(head, 20);
    print(head);
    insertAtbeg(head, 30);
    print(head);
    insertAtbeg(head, 40);
    print(head);
    insertAtTail(tail, 50);
    print(head);
    insertAtTail(tail, 60);
    print(head);
    deletenode(5, head);
    print(head);
    deletenode(5, head);
    print(head);
    insertatindex(5, head, 22);
    print(head);
    insertatindex(6, head, 27);
    print(head);
    return 0;
}