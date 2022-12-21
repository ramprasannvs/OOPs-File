//Q1.Write a C++ Program to swap Two Numbers without using third variable.
#include<iostream>
using namespace std;
int main(){
    int a=5,b=10;
    cout<<"Before swap a="<<a<<"b="<<endl;
    a=a*b;
    b=a/b;
    a=a/b;
    cout<<"After swap a= "<<a<<"b="<<b<<endl;
    return 0;

}
//Output---
// Before swap a=5b=10
// After swap a= 10b=5

