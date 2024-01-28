#include <iostream>
using namespace std;
void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
    void bubblesort(int *b, int m)
    {
        int temp;
        for (int i = 0; i < m - 1; i++)
        {
            for (int j = 0; j < m - 1 - i; j++)
            {
                if (b[j] > b[j + 1])
                {
                    temp = b[j];
                    b[j] = b[j + 1];
                    b[j + 1] = temp;
                }
            }
        }
    }


int main()
{
    int arr[20];
    int n;
    cout << "No of elements in array :\n";
    cin >> n;
    cout << "enter elements :/n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    printarray(arr, n);
    bubblesort(arr,n);
printarray(arr, n);
    return 0;
}