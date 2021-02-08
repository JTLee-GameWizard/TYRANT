#include <TYRANT/Application.h>
#include <TYRANT/Level.h>
namespace Tyrant
{
	GameApplication::GameApplication()
		: m_window(sf::VideoMode(768, 1024),"TYRANT DEFAULT APP"),
		m_CurrentLevel(nullptr),
		m_assetManager()
	{
		Init();
	}

	void GameApplication::Run()
	{
		BeginPlay();
		float previousFrameTime = m_TickTimer.getElapsedTime().asSeconds();
		while (m_window.isOpen())
		{
			float currentTime = m_TickTimer.getElapsedTime().asSeconds();
			float DeltaTime = currentTime - previousFrameTime;
			previousFrameTime = currentTime;
			PullWindowEvents();
			Tick(DeltaTime);
		}
	}

	void GameApplication::Init()
	{

	}

	void GameApplication::DrawLevel()
	{
		m_window.clear();
		if (m_CurrentLevel)
		{
			m_window.draw(m_CurrentLevel->GetBackGround());
			//draw stuff in current level...
		}
		m_window.display();
	}

	void GameApplication::UnLoadCurrentLevel()
	{
		if (m_CurrentLevel)
		{
			delete m_CurrentLevel;
			m_CurrentLevel = nullptr;
		}
	}

	void GameApplication::PullWindowEvents()
	{
		sf::Event event;
		m_window.pollEvent(event);
		if (event.type==sf::Event::Closed)
		{
			m_window.close();
		}
	}

	void GameApplication::BeginPlay()
	{

	}

	void GameApplication::Tick(float DeltaTime)
	{
		if (m_CurrentLevel)
		{
			m_CurrentLevel->Tick(DeltaTime);
			DrawLevel();
		}
	}

	void GameApplication::Pause()
	{

	}

	GameApplication::~GameApplication()
	{
		UnLoadCurrentLevel();
	}

	void GameApplication::LoadLevel(class Level* LevelToLoad)
	{
		UnLoadCurrentLevel();
		m_CurrentLevel = LevelToLoad;
	}

	Tyrant::AssetManager& GameApplication::GetAssetManager()
	{
		return m_assetManager;
	}
}