#pragma once
#include <SFML/Graphics.hpp>
#include <TYRANT/Core.h>
namespace Tyrant
{
	class TYRANT_API AssetManager
	{
	public:
		sf::Texture& LoadTexture(const std::string& dir = "");
	private:
		std::map<std::string, sf::Texture> m_Textures;
	};
}
