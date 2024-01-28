#include<iostream>
using namespace std;

int main(){
    int digit, ans=0, n;
cout<<"Enter the no: \n";
cin>>n;
while (n!=0)
{
    if(ans>=INT32_MAX/10 || ans<=INT32_MIN/10){

        cout<<"out of range";
        return 0;
    }
    else{
    digit=n%10;
    ans=(ans*10)+digit;
    n=n/10;
}}
cout<<" The reverse no is : "<<ans;
    return 0;
}