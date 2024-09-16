#include <bits/stdc++.h>
using namespace std;

class Animal{
    public:
    void eat(){
        cout << "This animal is eating." << endl;
    }
};

class Mammal : public Animal{
    public: 
    void birth(){
        cout << "This animal gives birth." << endl;
    }
};

class Dog : public Mammal{
    public: 
    void bark(){
        cout << "This dog is barking." << endl;
    }
};

int main(){
    Dog myDog;
    myDog.eat(); // inherited from Animal
    myDog.birth(); // inherited from Mammal
    myDog.bark(); // defined in Dog
}