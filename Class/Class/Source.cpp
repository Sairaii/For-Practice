#include <iostream>
#include <string>

using namespace std;

class Animal
{
public:

    Animal();
    Animal(string name, int age, int numberoflimbs);

    string Name;
    int Age;
    int NumberOfLimbs;

    void Report();
};

class Dog : public Animal //inherits everything from Animal class
{
public:
    Dog();
    Dog(string name, int age, int numberoflimbs);

    void Speak();
};

class Pomeranian : public Dog
{
public:
    Pomeranian();
};

int main()
{
    Dog dog("Husky", 5, 4);
    dog.Speak();

    Animal animal("lizard", 2, 4);


    Pomeranian pomeranian;
    pomeranian.Report();
    pomeranian.Speak();

    return 0;
}

Animal::Animal()
{
    cout << "New Animal : " << endl;

    Name = "DEFAULT";
    Age = 5;
    NumberOfLimbs = 0;
}

Animal::Animal(string name, int age, int numberoflimbs) : Name(name), Age(age), NumberOfLimbs(numberoflimbs) { Report(); }

void Animal::Report()
{
    cout << endl;
    cout << "Animal name : " << Name << endl;
    cout << "Animal age : " << Age << endl;
    cout << "Animal number of limbs : " << NumberOfLimbs << endl;
    cout << endl;
}

Dog::Dog()
{
    cout << "Calling default Dog Constructor" << endl;
    cout << "Corgi" << endl;
}

Dog::Dog(string name, int age, int numberoflimbs) //: Animal(name, age, numberoflimbs) only Animal with 3 parameters will called
{
    cout << "Calling 3 argument Dog constructor" << endl;
    Animal(name, age, numberoflimbs); //Animal with 1 parameter and 3 parameters will called
}

void Dog::Speak()
{
    cout << "WOOF!" << endl;
}


Pomeranian::Pomeranian()
{
    cout << "Calling Pomeranian constructor" << endl;
}