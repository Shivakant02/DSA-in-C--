#include<bits/stdc++.h>
using namespace std;
long long int sqroot(int n){
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    int ans=-1;
    while (s<=e)
    {
        long long int square=mid*mid;
        if(square==n){
            return mid;
        }
        else if(square>n){
            ans=mid;
            e=mid-1;
        }
        else{
            
            s=mid+1;
        }
         mid=s+(e-s)/2;
    }
    return ans;
    
}
int main(){
    int n=10000;
    int s= sqroot(n);
cout<<s;
    return 0;
}