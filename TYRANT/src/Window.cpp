#pragma once
#include <TYRANT/Window/Window.h>
#include <TYRANT/AssetManager.h>
#include <TYRANT/Level.h>
#include <TYRANT/Entity.h>
namespace Tyrant
{
	Window::Window(int width, int height, const std::string& title)
		: m_sfGraphWindow(sf::VideoMode(width, height), title)
	{
		
	}

	void Window::DrawLevel(std::shared_ptr<class Level> LevelToDraw)
	{
		m_sfGraphWindow.clear();
		m_sfGraphWindow.draw(LevelToDraw->GetBackGround());
		for (auto item : LevelToDraw->GetEntities())
		{
			m_sfGraphWindow.draw(item->GetSprite());
		}
		m_sfGraphWindow.display();
	}

	void Window::CheckInput()
	{
		sf::Event event;
		if (m_sfGraphWindow.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				m_sfGraphWindow.close();
			}
		}
	}

	bool Window::isOpen() const
	{
		return m_sfGraphWindow.isOpen();
	}
}