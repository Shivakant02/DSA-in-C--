#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        int val = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
    }
};
void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
void insertionAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}
void InsertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void insertAtIndex(Node *&tail, Node *&head, int d, int k)
{
    if (k == 0)
    {
        insertionAtHead(head, d);
        return;
    }

    Node *p = head;
    int i = 1;
    while (i < k - 1)
    {
        p = p->next;
        i++;
    }
    if (p->next == NULL)
    {
        InsertAtTail(tail, d);
        return;
    }
    Node *temp = new Node(d);
    temp->next = p->next;
    p->next = temp;
}
void deleteNode(int index, Node *&head)
{
    if (index == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < index)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
int main()
{
    Node *node = new Node(10);
    Node *head = node;
    Node *tail = node;
    print(head);
    insertionAtHead(head, 20);
    print(head);
    insertionAtHead(head, 30);
    print(head);
    insertionAtHead(head, 40);
    print(head);
    insertionAtHead(head, 50);
    print(head);
    InsertAtTail(tail, 5);
    print(head);
    insertAtIndex(tail, head, 15, 7);
    print(head);
    deleteNode(1, head);
    print(head);
    deleteNode(6, head);
    print(head);
    return 0;
}