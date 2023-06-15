// Example program
#include <iostream>
#include <string>

using namespace std;

class Critter
{
public:
    Critter()
    {
        cout << "New critter is born" << endl;
        ++count; //count++ is the same because it's not assigned to any variable
    }

    static void Report()
    {
        cout << count << endl;
    }

     static int count;
};

int Critter::count = 0; //the way to declare static variable

int main()
{
    Critter::Report();

    Critter* critter = new Critter();
    Critter::Report();
    delete critter;

    return 0;
}