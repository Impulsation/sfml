#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow window;
	window.create(sf::VideoMode(800, 600), "SFML Window");

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
				case sf::Event::Closed:
					window.close();
					break;
			}
		}
		window.display();
	}
}
