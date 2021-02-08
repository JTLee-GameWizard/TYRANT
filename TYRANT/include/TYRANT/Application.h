#pragma once
#include <TYRANT/core.h>
#include <SFML/System.hpp>
#include <memory>
namespace Tyrant
{
	class TYRENTY_API GameApp
	{
	public:
		GameApp(int width, int height, const char* title);
		GameApp();
		virtual ~GameApp();
		virtual void Init();
		void Run();
		void Tick(float DeltaTime);
		void LoadLevel(std::shared_ptr<class Level> levelToLoad);
	private:
		sf::Clock m_TickingClock;
		std::unique_ptr<class Window> m_window;
		std::shared_ptr<class Level> CurrentLevel;
	};
	GameApp* CreateGameApp();
}

