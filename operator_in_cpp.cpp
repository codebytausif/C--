#include<iostream>
using namespace std;
// int func(int a, int b)
// {
   
//    int c=a;
//     a=b;
//     b=c;
//     return c;
// }
int main()
{
    // Operator in C++
    int a=4;
    a+=4;
    cout<<a<<endl;
    a-=4;
    cout<<a<<endl;
    a*=4;
    cout<<a<<endl;
    a/=4;
    cout<<"The last value in a: "<<a;
    int b;
    cout<<"Enter the value of b : ";
    cin>>b;
    int c;
    c=a+b;
    cout<<c<<endl;
    c=a-b;
    cout<<c<<endl;
    c=a*b;
    cout<<c<<endl;
    c=a/b;
    cout<<c<<endl;
    c=a%b;
    cout<<c;
}