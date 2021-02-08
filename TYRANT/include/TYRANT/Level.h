#pragma once
#include <vector>
#include <memory>
#include <TYRANT/core.h>
#include <SFML/Graphics.hpp>
namespace Tyrant
{
	class TYRENTY_API Level
	{
	public:
		Level();
		~Level();
		virtual void LevelBegin();
		virtual void Tick(float DeltaTime);
		virtual void EndLevel();
		void SetBackGround(const sf::Texture& bg);
		
		template<typename T>
		void SpawnEntity(float LocX, float LocY)
		{
			std::shared_ptr<T> newEntiry(new T(LocX, LocY));
			m_Entities.push_back(newEntiry);
		}

		std::vector<std::shared_ptr<class Entity>>& GetEntities() { return m_Entities; }
		sf::Sprite& GetBackGround();
	private:
		std::vector<std::shared_ptr<class Entity>> m_Entities;
		sf::Sprite m_BackGround;
	};
}