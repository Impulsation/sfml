#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "My first SFML Game");

	// load texture for sprite
	sf::Texture texture;
	texture.loadFromFile("circle.png");

	// create a sprite
	sf::Sprite circle;
	circle.setTexture(texture);
	circle.setTextureRect(sf::IntRect(0, 0, 32, 32));

	// main loop
	while (Window.isOpen())
	{
		// create new Event and poll for events
		sf::Event Event;
		while (Window.pollEvent(Event))
		{
			// exit program if close is received
			if (Event.type == sf::Event::Closed)
				Window.close();

			// switch for mouse events
			switch(Event.type)
			{
				// close the program
				case sf::Event::Closed:
					Window.close();
					break;

				// display message when mouse enters screen bounds
				case sf::Event::MouseEntered:
					std::cout << "Mouse within screen bounds" << std::endl;
					break;

				// display message when mouse leaves screen bounds
				case sf::Event::MouseLeft:
					std::cout << "Mouse NOT within screen bounds" << std::endl;
					break;

				// erase then draw the sprite everytime the mouse is moved
				// print x and y coordinates to the console
				case sf::Event::MouseMoved:
					Window.clear();
					std::cout << "X: " << Event.mouseMove.x << " Y: " << Event.mouseMove.y << std::endl;
					circle.setPosition(Event.mouseMove.x - 16, Event.mouseMove.y - 16);
					Window.draw(circle);
					break;
			}
		}

		Window.display();
	}
}
