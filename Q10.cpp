//Q10.Write a program in C++ to count word in a sentence.
#include<iostream>
using namespace std;
int main(){
    string sen="hello sir";
    int word=0,i;
    int  sentence=sen.size();
    for ( i = 0; i <sentence; i++)
    {
        if(sen[i]==' ')
        {
            word++;
        }
    }
    word=word+1;
    cout<<"no of words= "<<word<<endl;
    

}
//output 
//no of words= 2