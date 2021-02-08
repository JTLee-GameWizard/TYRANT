#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <map>
#include <TYRANT/core.h>
namespace Tyrant
{
	class TYRENTY_API AssetManager
	{
	public:
		/*
		Load a texture from asset manager if found with name, or load the texture with dir and load it to asset manager, and return it
		params:
			@name name of the texture
			@dir directory of the texture
		*/
		sf::Texture LoadTexture(const std::string& name, const std::string& dir = "");
	private:
		std::map<std::string, sf::Texture> s_Textures;
		sf::Texture s_dummyTexture;
	};

	TYRENTY_API AssetManager& GetAssetManager();
}