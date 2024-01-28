#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter element:"<<'\n';
    cin>>ch;
    if (ch<='z'&& ch>='a')
    {
    cout<<"lowercase"<<endl;
    }
    else if (ch<='Z'&&ch>='A')
    {
        cout<<"uppercase"<<endl;
    }
    else if (ch>='0' && ch<='9')
    {
        cout<<"neumeric value";
    }
    
    return 0;
}