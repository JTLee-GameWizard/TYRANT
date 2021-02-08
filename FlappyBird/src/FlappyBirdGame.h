#pragma once
#include <TYRANT/Application.h>
class FlappyBirdGame : public Tyrant::GameApplication
{
public: 
	FlappyBirdGame();
	virtual void Init() override;
	virtual void BeginPlay() override;
};

