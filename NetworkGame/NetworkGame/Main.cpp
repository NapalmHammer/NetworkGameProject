#include <iostream>
#include "Window.h"

int main()
{
	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (MainWindow::window.isOpen())
	{
		sf::Event event;
		while (MainWindow::window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				MainWindow::window.close();
		}

		MainWindow::window.clear();
		MainWindow::window.draw(shape);
		MainWindow::window.display();
	}

	return 0;
}