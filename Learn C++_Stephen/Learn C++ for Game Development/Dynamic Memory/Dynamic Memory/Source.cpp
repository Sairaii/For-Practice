#include <iostream>
#include <string>

using namespace std;

struct Character
{
    Character();
    ~Character();

    string* Name;
    float* Health;
};

int main()
{
    Character* character = new Character(); //without () is okay as well
    delete character;


    return 0;
}

Character::Character()
{
    Name = new string("Billy");
    Health = new float(23);

    cout << "Dynamic allocation (heap) created" << endl;
}

Character::~Character()
{
    delete Name;
    Name = nullptr; //to avoid dangling pointer. but is optional because it's done in general (just play safe)

    delete Health;
    Health = nullptr;

    cout << "Dynamic allocation (heap) deleted" << endl;
}
