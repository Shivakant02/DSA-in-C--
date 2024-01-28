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

int binarysearch(int arr[], int s,int e, int key)
{
    int start = s;
    int end = e;
    int mid = (start + end) / 2;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
     else   if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start +( end-start) / 2;
    }
    return -1;
}

int findposition(int arr[],int size,int k){
    int pivot=findpivot(arr,size);
    if(k>=arr[pivot] && k<=arr[size-1]){
        return binarysearch(arr,pivot,size-1,k);
    }
    else{
        return binarysearch(arr,0,pivot-1,k);
    }
}
int main(){
     int arr[7]={3,8,10,17,1,2,3};
     int w=findposition(arr,7,10);
    cout<<w;
    return 0;
}