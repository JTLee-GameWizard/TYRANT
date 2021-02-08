#include "TYRANT/Application.h"
#include <iostream>
#include <TYRANT/Window/Window.h>
#include <TYRANT/Level.h>
namespace Tyrant
{

	GameApp::GameApp()
		: m_window(new Window())
	{

	}

	GameApp::GameApp(int width, int height, const char* title)
		:m_window(new Window(width, height, title))
	{

	}

	GameApp::~GameApp()
	{

	}

	void GameApp::Init()
	{

	}

	void GameApp::Run()
	{
		float LastFrameTime = m_TickingClock.getElapsedTime().asSeconds();
		while (m_window->isOpen())
		{
			float currentTime = m_TickingClock.getElapsedTime().asSeconds();
			float DeltaTime = currentTime - LastFrameTime;
			LastFrameTime = currentTime;
			m_window->CheckInput();
			Tick(DeltaTime);
		}
	}

	void GameApp::Tick(float DeltaTime)
	{
		if (CurrentLevel)
		{
			CurrentLevel->Tick(DeltaTime);
			m_window->DrawLevel(CurrentLevel);
		}
	}

	void GameApp::LoadLevel(std::shared_ptr<class Level> levelToLoad)
	{
		if (CurrentLevel)
		{
			CurrentLevel->EndLevel();
		}
		CurrentLevel = levelToLoad;
	}
}
