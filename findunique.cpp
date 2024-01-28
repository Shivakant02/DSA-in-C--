#include<bits/stdc++.h>
using namespace std;
int findunique(int arr[],int size){
    int ans =0;
    for(int i=0;i<size;i++){
        ans = ans^arr[i];
    }
    return ans;
}
int main(){
    int *arr;
    int n;
    cout<<"Enter the no of elements present in array : \n";
    cin>>n;
    cout<<"Enter elements :\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findunique(arr,n);
    return 0;
}