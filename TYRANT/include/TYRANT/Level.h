#pragma once
#include <TYRANT/Core.h>
#include <SFML/Graphics.hpp>
namespace Tyrant
{
	class TYRANT_API Level
	{
	public:
		Level(const sf::Texture& backgroudTexture);
		Level();
		virtual void BeginPlay();
		virtual void Tick(float DeltaTime);
		const sf::Sprite& GetBackGround() const { return m_Backgroud; }
		void SetBackGround(const sf::Texture& background);
	private:
		sf::Sprite m_Backgroud;
	};
}
