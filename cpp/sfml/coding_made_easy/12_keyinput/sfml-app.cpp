#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	enum Direction { Down, Left, Right, Up };

	sf::Vector2i source(1 , Down);
	sf::Vector2f current_pos(0, 0);

	float frameCounter = 0, switchFrame = 200, frameSpeed = 500;

	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

	sf::Texture pTexture;
	sf::Sprite playerImage;
	sf::Clock clock;

	if (!pTexture.loadFromFile("image.png"))
		std::cout << "Error: could not load player image" << std::endl;

	playerImage.setTexture(pTexture);
	playerImage.setPosition(100, 100);

	while (Window.isOpen())
	{
		sf::Event Event;
		while (Window.pollEvent(Event))
		{
			switch (Event.type)
			{
				case sf::Event::Closed:
					Window.close();
					break;
			}	
		}

		// Detect Keypresses and determine sprite direction
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			source.y = Up;
			playerImage.move(0, -1);
			std::cout << "source.y " << source.y << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			source.y = Down;
			playerImage.move(0, 1);
			std::cout << "source.y " << source.y << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			source.y = Right;
			playerImage.move(1, 0);
			std::cout << "source.y " << source.y << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			source.y = Left;
			playerImage.move(-1, 0);
			std::cout << "LEFT PRESSED" << std::endl;
			std::cout << "source.y " << source.y << std::endl;
		}

		// Limit the frames
		std::cout << clock.getElapsedTime().asSeconds() << std::endl;
		frameCounter += frameSpeed * clock.restart().asSeconds();
		if (frameCounter >= switchFrame)
		{
			frameCounter = 0;
			source.x++;
			if (source.x * 32 >= pTexture.getSize().x)
				source.x = 0;
		}

		// Output debugging info
		current_pos = playerImage.getPosition();
		std::cout << "source x: " << source.x << " source y: " << source.y << std::endl;
		std::cout << "current_pos x: " << current_pos.x << "current_pos y: " << current_pos.y << std::endl;
		std::cout << Down << " " << Left << " " << Right << " " << Up << std::endl;
		
		// Update the window
		playerImage.setTextureRect(sf::IntRect(source.x * 32, source.y * 32, 32, 32));
		Window.draw(playerImage);
		Window.display();
		Window.clear();
	}
}
