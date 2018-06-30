#pragma once
#include "Window.h"

class Game
{
public:
	Game();
	void Go();
private:
	void Begin();
	void UpdateModel();
	void Compose();
	void End();
	sf::RenderWindow window;
	sf::CircleShape shape;
};