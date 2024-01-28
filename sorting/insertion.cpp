#include<iostream>
using namespace std;
void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout<<endl;
}
void insertion(int *a,int n){
    int key,j;
    for (int  i = 1; i <=n-1; i++)
    {
        key=a[i];
        j=i-1;
        while (j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;

        }
        
a[j+1]=key;
    }
    
}
int main(){
    int arr[20];
    int n=5;
    cout<<"Enter the no of elements presented in array : \n";
    cin>>n;
    cout<<"Enter elements : \n";
    for (int  i = 0; i < n; i++)

    {
        cin>>arr[i];
    }
    
    insertion(arr,n);
    printarray(arr,n);
    return 0;
}