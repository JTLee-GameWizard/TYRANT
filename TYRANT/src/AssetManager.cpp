#include "TYRANT/AssetManager.h"
namespace Tyrant
{

	sf::Texture& AssetManager::LoadTexture(const std::string& dir /*= ""*/)
	{
		if (m_Textures.find(dir) == m_Textures.end())
		{
			sf::Texture tx;
			if (tx.loadFromFile(dir))
			{
				m_Textures[dir] = tx;
			}
		}
		return m_Textures[dir];
	}

}