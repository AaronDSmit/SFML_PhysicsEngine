#include "Application.h"
#include <SFML/Graphics.hpp>

Application::Application()
{

}

int Application::run(const char* a_windowName, int a_width, int a_height, bool a_fullscreen)
{
	sf::RenderWindow window(sf::VideoMode(a_width, a_height), a_windowName, (a_fullscreen) ? sf::Style::Fullscreen : sf::Style::Default);

	// Start up and exit if it fails
	if (onStartup() != 0)
	{
		return false;
	}

	sf::CircleShape shape(100.f);
	shape.setFillColor(sf::Color::Green);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(shape);
		window.display();
	}

	return 0;
}