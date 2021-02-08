#include <TYRANT/AssetManager.h>
#include <iostream>
namespace Tyrant
{
	sf::Texture& AssetManager::LoadTexture(const std::string& name, const std::string& dir)
	{
		if (s_Textures.find(name)!=s_Textures.end())
		{
			return s_Textures[name];
		}
		else
		{
			//need to load the texture
			sf::Texture newTex;
			if (newTex.loadFromFile(dir))
			{
				s_Textures[name] = newTex;
				return s_Textures[name];
			}
		}

		std::cout << "Texture loading with name: " << name << ", and path: " << dir << " Failed" << std::endl;
		return s_dummyTexture;
	}

	Tyrant::AssetManager& GetAssetManager()
	{
		static AssetManager assetManager;
		return assetManager;
	}
}