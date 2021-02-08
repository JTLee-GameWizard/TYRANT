#include <iostream>
#include <TYRANT/Tyrant.h>
#include "FlappyBirdGame.h"

Tyrant::GameApplication* Tyrant::CreateApplication()
{
	return new FlappyBirdGame();
}

