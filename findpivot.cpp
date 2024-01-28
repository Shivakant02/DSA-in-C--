#include<bits/stdc++.h>
using namespace std;
int findpivot(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    while (s<e)
    {
        if(arr[mid]>=arr[0]){
         s=mid+1;
        }
        else{
            e=mid;
        }
mid=s+(e-s)/2;

    }
    return s;
}
int main(){
    int arr[7]={3,8,10,17,1,2,3};
   int s= findpivot(arr,7);
   cout<<s;
    return 0;
}