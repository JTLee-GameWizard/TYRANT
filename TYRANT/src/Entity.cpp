#include "TYRANT/Entity.h"
namespace Tyrant
{

	
	Entity::Entity(float LocX /*= 0*/, float LocY /*= 0*/, const sf::Texture& texture /*= sf::Texture()*/)
		: m_Visual(texture)
	{
		m_Visual.setPosition(LocX, LocY);
	}

	Entity::Entity()
		: m_Visual()
	{

	}

	Entity::~Entity()
	{

	}

	void Entity::BeginPlay()
	{

	}

	void Entity::Tick(float DeltaTime)
	{

	}

	void Entity::Destory()
	{
	
	}

	void Entity::SetTexture(const sf::Texture& texture)
	{
		m_Visual.setTexture(texture);
	}

	void Entity::SetLocation(float LocX, float LocY)
	{
		m_Visual.setPosition(LocX, LocY);
	}
}