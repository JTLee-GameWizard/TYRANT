#pragma once
#include <SFML/Graphics.hpp>
#include <TYRANT/core.h>
#include <memory>
namespace Tyrant
{
	class TYRENTY_API Entity
	{
	public:
		Entity();
		Entity(float LocX, float LocY, const sf::Texture& texture);
		virtual ~Entity();
		virtual void BeginPlay();
		virtual void Tick(float DeltaTime);
		virtual void Destory();
		void SetTexture(const sf::Texture& texture);
		void SetLocation(float LocX, float LocY);
		sf::Sprite& GetSprite() { return m_Visual; }
	private:
		sf::Sprite m_Visual;
	};
}