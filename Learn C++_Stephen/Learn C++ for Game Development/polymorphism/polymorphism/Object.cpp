#include <iostream>
#include <string>
#include "Object.h"

using namespace std;

void Object::BeginPlay()
{
	cout << "Object BeginPlay() Called" << endl;
}

void Object::ObjectFunction()
{
	cout << "object function called" << endl;
}
