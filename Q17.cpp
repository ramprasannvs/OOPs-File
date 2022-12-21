//Q17.Write a C++ program to print reverse of any given number using Class. Example: 
//i/p=2345 o/p=5432

#include<iostream>
using namespace std;

class rev
{
        private:
                        int n,n1,rn=0,d;
        public:
                void input();
                void calc();
                void display();
};

void rev::input()
{
        cout<<"\nEnter any positive no. :: ";
        cin>>n;
}

void rev::calc()
{
        n1=n;
        while(n>0)
        {
                d=n%10;
                rn=(rn*10)+d;
                n/=10;

        }
}

void rev::display()
{
                cout<<"\nReverse of [ "<<n1<<" ] is :: "<<rn<<"\n";
}

int main ()
{
        rev r;
        r.input();
        r.calc();
        r.display();

        return 0;

}
/*
output
Enter any positive no. :: 12345

Reverse of [ 12345 ] is :: 54321*/
