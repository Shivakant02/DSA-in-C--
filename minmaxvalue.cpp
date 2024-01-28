#include<bits/stdc++.h>
using namespace std;
int getmax(int arr[],int n){
int max=INT_MIN;
for (int i = 0; i < n; i++)
{
    if(arr[i]>max){
        max=arr[i];
    }
}
return max;
}
int getmin(int arr[],int n){
int min=INT_MAX;
for (int i = 0; i < n; i++)
{
    if(arr[i]<min){
        min=arr[i];
    }
}
return min;

}
int main(){
    int arr[20];
    int n;
    cout<<"Enter the no of  elements :\n";
    cin>>n;
    cout<<"Enter the elements :\n";
    for(int i=0;i<n;i++){
cin>>arr[i];

    }
cout<<"the min value is "<<getmin(arr,n)<<endl;

cout<<"the max value is "<<getmax(arr,n);
    return 0;
}