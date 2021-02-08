#pragma once
#include <Tyrant/Core.h>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <TYRANT/AssetManager.h>
namespace Tyrant
{
	class TYRANT_API GameApplication
	{
	public:
		GameApplication();
		virtual void Run();
		virtual void Pause();
		virtual ~GameApplication();
		void LoadLevel(class Level* LevelToLoad);
		AssetManager& GetAssetManager();
	protected:
		virtual void Tick(float DeltaTime);
		virtual void BeginPlay();
		virtual void Init();
		virtual void DrawLevel();
	private:
		virtual void UnLoadCurrentLevel();
		void PullWindowEvents();
	private:
		sf::RenderWindow m_window;
		sf::Clock m_TickTimer;
		class Level* m_CurrentLevel;
		AssetManager m_assetManager;
	};
	GameApplication* CreateApplication();
	GameApplication* GetApplication();
}