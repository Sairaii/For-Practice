#include <iostream>
#include <string>

using namespace std;

void AddOne(int& Num);
void AddOne(string& text);


struct Container //for pointer example 2:
{
    string Name;
    int locationX;
    int LocationY;
    int LocationZ;
};

int main()
{
    int a = 1;
    string b = "Hello";

    int testnumber1 = 10;

    AddOne(a);
    AddOne(b);

    //pointer example 1:

    int x = 200;
    int* xPtr;

    xPtr = &x; //aPtr = a takes error, must use &

    cout << *xPtr << endl; //get pointer value of aPtr, which located in memory address stored in aPtr (dereference)
    //when using pointer for declaring a variable (ex. int *aPtr) the dereference must use * too
    //pointer = address reference = alias

    //pointer example 2:

    Container container = { "Sam", 10, 20, 30 };
    Container* PtrContainer = &container;

    cout << PtrContainer->Name<<endl;

    //pointer example 3:

    int Number[] = { 1,2,3,4,5,6,7,8,9,10 };

    int* PtrNumber = Number; //&Number cause an error because an array is a reference type (by default the address is the first element); no & needed; it's already a reference.
    int* PtrNumber2 = &Number[1]; //or if you insist using reference

    PtrNumber += 2;
    PtrNumber2 += 2;

    cout << *PtrNumber << endl;
    cout << PtrNumber << endl;

    cout << *PtrNumber2 << endl;
    cout << PtrNumber2 << endl;
}

void AddOne(int& Num)
{
    Num++;
    cout << Num << endl;
}

void AddOne(string& text)
{
    cout << text << endl;
}
