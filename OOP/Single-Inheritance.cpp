#include <bits/stdc++.h>
using namespace std;

class Animal{
public:
    void eat(){
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal{
public: 
    void bark(){
        cout << "The dog is barking." << endl;
    }
};

int main(){
    Dog myDog;
    myDog.eat(); // Inherited from Animal
    myDog.bark(); // Defined in dog
    return 0;
}