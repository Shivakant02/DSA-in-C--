#include <iostream>
#include <string.h>

using namespace std;
class Employee
{
public:
    string name;
    int salery;
    Employee(string name, int salery)
    {
        this->name = name;
        this->salery = salery;
    }

    void printdetails()
    {
        cout << "the name of employee is " << this->name << ", and salery is " << this->salery << endl;
    }
};
// int sum(int num1,int num2){
//     return num1+num2;
int main()
{
    // OOPS ,classes and objects
    Employee sh("SHIVAKANT constructor", 78000000);
    // sh.name="SHIVAKANT";
    // sh.salery=20000000;
    sh.printdetails();

    // int a=34;
    // int* ptra;
    // ptra = &a;
    // cout<<"The value of a is "<<a<<endl;
    // cout<<"The value of a is "<<*ptra<<endl;
    // cout<<"The address of a is "<<&a<<endl;
    // cout<<"The address of a is "<<ptra<<endl;

    // string name ="SHIVA";
    // cout<<"the name is "<<name<<endl;
    // cout<<"the length of  the name is "<<name.length()<<endl;
    // cout<<"the name is "<<name.substr(0,3)<<endl;
    // int arr2d[2][3]={
    //     {1,2,3},
    //     {4,5,6}
    // };
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout<<"the value at "<<i<<","<<j<<" is "<<arr2d[i][j]<<endl;
    //     }

    // }

    // int marks[6];
    // for (int i = 0; i <6; i++)
    // {
    //     cout<<"Enter the marks of "<<i+1<<"th student : "<<endl;
    //     cin>>marks[i];

    // }
    // for (int i = 0; i < 6; i++)
    // {
    //     cout <<"The marks of student "<<i+1<<" ; "<<marks[i]<<endl;

    // }

    // int a,b;
    // cout<<"Enter the first no: "<<endl;
    // cin>>a;
    // cout<<"Enter the second no: "<<endl;
    // cin>>b;
    // cout<<"The sum is : "<<sum(a,b);
    // to print natural nos.
    // int no=1;
    // while(no<=50)
    // {
    //     cout<<no<<endl;
    //     no=no+1;
    // }

    return 0;
}