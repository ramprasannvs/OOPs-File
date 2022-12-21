//Q6.Write a C++ Program to show Constructor and Destructor Example.


#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    Student(string name1)
    {
        name = name1;
        cout << "Constructor is called." << endl;
    }
    ~Student()
    {
        cout << "Destructor is called." << endl;
    }
};

int main()
{
    Student s1("Pandey");

    cout << "Name: " << s1.name << endl;
    

    return 0;
}

/*
    Output:
    Constructor is called.
    Name: Pandey
    
    Destructor is called.
*/