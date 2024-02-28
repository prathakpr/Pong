#include "Bat.h"
// This the constructor and it is called when we create an object
Bat::Bat(float startX, float startY)
{
	m_Position.x = startX;
	m_Position.y = startY;
	m_Shape.setSize(sf::Vector2f(50, 5));
	m_Shape.setPosition(m_Position);
}