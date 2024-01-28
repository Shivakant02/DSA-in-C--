#include<bits/stdc++.h>
using namespace std;
int peakelement(vector<int> &arr){
    int s=0;
    int e=arr.size()-1;
    int mid=s+(e-s)/2;
    while(s<e)
    {
      if(arr[mid]<arr[mid+1]){
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
    vector<int>arr={0,1,2,3,2,1,0};
    cout<<peakelement(arr);
    return 0;
}