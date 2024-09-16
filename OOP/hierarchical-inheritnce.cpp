#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "This animal is eating." << endl;
    }
};

class Cat : public Animal{
    public:
    void meow(){
        cout << "This Cat is meowing." << endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout << "This Dog is barking." << endl;
    }
};

int main(){
    Dog myDog;
    Cat myCat;

    myDog.eat(); //from animal
    myDog.bark(); //from itself

    myCat.eat(); //from Animal
    myCat.meow();//from itself
}