#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "This animal is eating." << endl;
    }
};

class Mammal{
public:
    void giveBirth(){
        cout << "This animal gives birth." << endl;
    }
};

class Dog : public Animal, public Mammal{
public: 
    void bark(){
        cout << "The dog is barking." << endl;
    }
};

int main(){
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.giveBirth(); // Inherited from Mammal
    myDog.bark(); // Defined in dog
    return 0;
}