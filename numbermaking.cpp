#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int arr[20];
int n;
cout<<"enter the no of elements\n";
cin>>n;

int i=0;
while(i<n)
{
    cout<<"enter "<<i+1<<" elements\n";
    cin>>arr[i];
    i++;
}
int ans=0;
for (int i = 0; i < n; i++)
{
    //for same flow
    // ans=(ans*10)+arr[i];
    // for reverse flow
    ans=(arr[i]*pow(10,i))+ans;
}


cout<<"The no is ";
cout<<ans;

    return 0;
}