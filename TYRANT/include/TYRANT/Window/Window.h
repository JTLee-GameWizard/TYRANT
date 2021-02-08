#pragma once
#include <SFML/Graphics.hpp>
#include <string>
#include <TYRANT/core.h>
#include <memory>
namespace Tyrant
{
	class TYRENTY_API Window
	{
	public:
		Window(int width = 768, int height = 1024, const std::string& title = "TYRANT");
		void DrawLevel(std::shared_ptr<class Level> LevelToDraw);
		void CheckInput();
		bool isOpen() const;
	private:
		sf::RenderWindow m_sfGraphWindow;
	};
}