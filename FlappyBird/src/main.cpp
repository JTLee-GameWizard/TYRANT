#include <iostream>
#include <TYRANT/Tyrant.h>
Tyrant::GameApp* Tyrant::CreateGameApp()
{
	return new GameApp();
}