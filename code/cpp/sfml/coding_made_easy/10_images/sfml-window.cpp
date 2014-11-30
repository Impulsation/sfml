#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>
#include <ctime>
#include <cstdlib>

int main()
{
	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

	sf::Texture pTexture;
	sf::Sprite playerImage;
	if (!pTexture.loadFromFile("image.png", sf::IntRect(32, 0, 32, 32)))
	{
		std::cout << "Error: could not load player image" << std::endl;
	}

	playerImage.setTexture(pTexture);
	playerImage.setPosition(100, 100);

	while (Window.isOpen())
	{
		sf::Event Event;
		while (Window.pollEvent(Event))
		{
			if (Event.type == sf::Event::Closed)
				Window.close();
		}
		Window.draw(playerImage);
		Window.display();
	}
}
