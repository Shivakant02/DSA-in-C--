#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end=1;
    while(end<=n-1){
        swap(arr[start],arr[end]);
        start=start+2;
        end=end+2;

    }
}
void printarray(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[100]={34,54,12,67,65,76};
    int brr[100]={4,5,6,7,8};
    reverse(brr,5);
    reverse(arr,6);
    printarray(arr,6);
    printarray(brr,5);
    return 0;
}