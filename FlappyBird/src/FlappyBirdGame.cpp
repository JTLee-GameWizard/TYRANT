#include "FlappyBirdGame.h"
#include "MainMenuLevel.h"
FlappyBirdGame::FlappyBirdGame()
{
	
}

void FlappyBirdGame::Init()
{
	
}

void FlappyBirdGame::BeginPlay()
{
	LoadLevel(new MainMenuLevel());
}
