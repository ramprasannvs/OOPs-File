//Q16.Write a program in C++ that finds factorial of a given number using for loop
#include<iostream>
using namespace std;
int main(){
  int fact=1,i,n;
    
    cin>>n;

    for(i=1;i<=n;i++){
        fact=i*fact;
    }
    cout<<"factorial of "<<n<<"="<<fact;
}
/*
5
factorial of 5=120*/