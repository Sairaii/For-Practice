#include <iostream>
#include <string>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"

using namespace std;

void Pawn::BeginPlay()
{
	cout << "Pawn BeginPlay() Called" << endl;
}

void Pawn::PawnFunction()
{
	cout << "pawn function called" << endl;
}
