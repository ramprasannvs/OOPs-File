//Q11.Write a program in C++ that finds largest of three numbers.
#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"enter three no"<<endl;
    cin>>a>>b>>c;
    if(a>=b && a>=c){
        cout<<"largest no="<<a;

    }
    else if(b>=a && b>=c){
        cout<<"largest no="<<b;

    }
    else{
        cout<<"largest no="<<c;
    }
    return 0;
}
/*
enter three no
123
345
23
largest no=345*/