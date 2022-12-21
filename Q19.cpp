
//Q19 Write a C++ Program to show Overloading of Constructor Example.

#include <iostream>
using namespace std;

class Person {
   private:
    int age;

   public:
    // 1. Constructor with no arguments
    Person() {
        age = 20;
    }

    // 2. Constructor with an argument
    Person(int a) {
        age = a;
    }

    int getAge() {
        return age;
    }
};

int main() {
    Person person1, person2(45);

    cout << "Person1 Age = " << person1.getAge() << endl;
    cout << "Person2 Age = " << person2.getAge() << endl;

    return 0;
}
/*
output
Person1 Age = 20
Person2 Age = 45
*/