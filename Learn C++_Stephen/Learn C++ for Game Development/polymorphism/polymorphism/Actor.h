#pragma once

class Actor : public Object
{
public:
	virtual void BeginPlay() override;

	void ActorFunction();
};