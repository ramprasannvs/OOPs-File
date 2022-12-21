//Q9.write a program in C++ Program to Print Alphabet Triangle.

#include <iostream>
using namespace std;
 
int main()
{  
char ch='a';    
int i, j, k, l;    
for(i=1;i<=5;i++)    
{    
for(j=5;j>=i;j--)    
cout<< " ";    
for(k=1;k<=i;k++)    
cout << ch++;    
ch--;    
for(l=1;l<i;l++)    
cout<<--ch;    
cout<< "\n";    
ch='a';    
}    
return 0;
}
/*
output
       a
      aba
     abcba
    abcdcba
   abcdedcba*/