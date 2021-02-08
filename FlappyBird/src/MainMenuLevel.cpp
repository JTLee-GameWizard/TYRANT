#include "MainMenuLevel.h"
#include <TYRANT/Application.h>
MainMenuLevel::MainMenuLevel()
	: Level()
{
	Tyrant::GameApplication* app = Tyrant::GetApplication();
	sf::Texture& texture = app->GetAssetManager().LoadTexture("Resources/res/sky.png");
	SetBackGround(texture);
}
