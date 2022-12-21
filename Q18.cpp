//Q18.Write a C++ Program to find the Area of rectangle using function overloading
#include<iostream>
using namespace std;

int area(int,int);
int main()
{
        int l,b;
        cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
       
        cout<<"\nArea of rectangle is "<<area(l,b);
        return 0;
}

int area(int l,int b)
{
    return(l*b);
}
/*
Enter length and breadth of rectangle:6
3

Area of rectangle is 18*/