#include <iostream>
#include <string>
#include "Object.h"
#include "Actor.h"

using namespace std;

void Actor::BeginPlay()
{
	cout << "Actor BeginPlay() Called" << endl;
}

void Actor::ActorFunction()
{
	cout << "actor function called" << endl;
}
