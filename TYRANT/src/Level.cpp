#include <TYRANT/Level.h>
#include <TYRANT/Entity.h>
namespace Tyrant
{

	Level::Level()
		:m_BackGround(sf::Texture())
	{

	}

	Level::~Level()
	{

	}

	void Level::LevelBegin()
	{
		for (auto Item : m_Entities)
		{
			Item->BeginPlay();
		}
	}

	void Level::Tick(float DeltaTime)
	{
		for (auto Item : m_Entities)
		{
			Item->Tick(DeltaTime);
		}
	}

	void Level::EndLevel()
	{
		m_Entities.clear();
	}

	void Level::SetBackGround(const sf::Texture& bg)
	{
		m_BackGround.setTexture(bg);
	}

	sf::Sprite& Level::GetBackGround()
	{
		return m_BackGround;
	}
}