//Q12.Write a program in C++ to find out the power of a number
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int base,exponent,result;
    cout<<"enter the base and exponent"<<endl;
    cin>>base>>exponent;
    result=pow(base,exponent);
    cout<<result;
    return 0;
}
/*
output
enter the base and exponent
2
3
8*/