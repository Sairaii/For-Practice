#include <iostream>
#include <string>
#include "Object.h"
#include "Actor.h"
#include "Pawn.h"
#include "Source.h"

using namespace std;

void InheritanceFunction()
{
	Object* obj = new Object;
	Actor* act = new Actor;
	Pawn* pwn = new Pawn;

	Object* ObjectArray[] = { obj, act, pwn };

	LoopFunction(ObjectArray);

	delete obj;
	delete act;
	delete pwn;
}

void LoopFunction(Object* ObjectArray[3])
{
	for (int i = 0; i < 3; i++)
	{
		//ObjectArray[i]->BeginPlay();

		Object* TempObj = ObjectArray[i];

		Actor* TempAct = dynamic_cast<Actor*>(TempObj);

		if (TempAct)
		{
			TempAct->ActorFunction();
		}

		Pawn* TempPwn = dynamic_cast<Pawn*>(TempObj); //<what we're try to convert to > (what we're converting)

		if (TempPwn)
		{
			TempPwn->PawnFunction();
		}
	}
}

int main()
{
	InheritanceFunction();

	return 0;
}
