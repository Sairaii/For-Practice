#pragma once

class Pawn : public Object
{
public:
	virtual void BeginPlay() override;

	void PawnFunction();
};