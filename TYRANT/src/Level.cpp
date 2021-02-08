#include <Tyrant/Level.h>
namespace Tyrant
{
	Level::Level(const sf::Texture& backgroudTexture)
		: m_Backgroud(backgroudTexture)
	{

	}

	Level::Level()
	{

	}

	void Level::BeginPlay()
	{

	}

	void Level::Tick(float DeltaTime)
	{

	}

	void Level::SetBackGround(const sf::Texture& background)
	{
		m_Backgroud.setTexture(background);
	}

}
