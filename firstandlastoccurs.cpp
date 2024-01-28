#include<bits/stdc++.h>
using namespace std;
int firstocc(vector<int>& arr,int size,int key){
     int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end=mid -1;
        }
       else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
}
return ans;
}
int lastocc(vector<int>& arr,int size,int key){
     int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2;
    int ans=-1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start=mid +1;
        }
       else if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
}
return ans;
}
  
pair<int,int>firstandlastocc(vector<int> &arr,int size,int key){
    pair<int,int>p;
    p.first=firstocc(arr,size,key);
    p.second=lastocc(arr,size,key);
    return p;
}

int main(){
     vector<int>arr={5,6,6,6,6,7,8,9,99};
 pair<int,int>s= firstandlastocc(arr,9,6);
cout<<s.first<<" ";
cout<<s.second;
 
    return 0;
}