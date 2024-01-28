#include<bits/stdc++.h>
using namespace std;
bool check(int n){
    int ans=1;
    
for (int i = 0; i < 31; i++)
{
   
    if(ans==n){
    return true;
    }
if(n<INT_MAX/2)
ans=ans*2;
}
return false;

}
// bool check(int n){
    
    
// for (int i = 0; i < 31; i++)
// {
//     int m=pow(2,i);
//     if(m==n)
//     return true;
// }
// return false;

// }
int main(){
    int n;
    cin>>n;
    cout<<check(n);
    
}