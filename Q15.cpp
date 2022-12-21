//Q15.Write a program in C++ to display current date and time.
#include<iostream>
 #include <stdio.h>      
 #include <time.h>   
 using namespace std;
 int main() {
     time_t timetoday;
     time(&timetoday);
     cout << "Calendar date and time as per todays is : " << asctime(localtime(&timetoday));
     return 0;
 }
 /*
 output
 Calendar date and time as per todays is : Wed Dec 21 11:27:32 2022*/