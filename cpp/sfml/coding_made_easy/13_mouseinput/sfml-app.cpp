#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	enum Direction { Down, Left, Right, Up };

	sf::Vector2i source(1 , Down);
	int x_distance = 0, y_distance = 0;

	float frameCounter = 0, switchFrame = 200, frameSpeed = 500;

	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

	sf::Texture pTexture;
	sf::Sprite playerImage;
	sf::Clock clock;

	bool updateFrame = true;

	if (!pTexture.loadFromFile("image.png"))
		std::cout << "Error: could not load player image" << std::endl;

	playerImage.setTexture(pTexture);
	playerImage.setPosition(400, 300);

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

		// Defaults to not updating frames, prevent player move animation while standing still
		updateFrame = false;

		// Keyboard Control
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			source.y = Up;
			playerImage.move(0, -1);
			updateFrame = true;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			source.y = Down;
			playerImage.move(0, 1);
			updateFrame = true;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
			source.y = Right;
			playerImage.move(1, 0);
			updateFrame = true;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			source.y = Left;
			playerImage.move(-1, 0);
			updateFrame = true;
		}

		// Vector to hold mouse position
		sf::Vector2i mousePosition = sf::Mouse::getPosition(Window);
		std::cout << "X: " << mousePosition.x << " Y: " << mousePosition.y << std::endl;

		// Vector to hold player position
		sf::Vector2f playerPosition = playerImage.getPosition();
		std::cout << "Player X: " << playerPosition.x << " Y: " << playerPosition.y << std::endl;
		std::cout << "x_distance: " << x_distance << " y_distance: " << y_distance << std::endl;

		// Mouse controls
		if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
		{
			updateFrame = true;
			x_distance = mousePosition.x - playerPosition.x;
			y_distance = mousePosition.y - playerPosition.y;

			// Check mouseclick position and point player in that direction
			if (x_distance > 0 && y_distance < 0)
			{
				std::cout << "TOP RIGHT" << std::endl;
				if (x_distance * x_distance > y_distance * y_distance)
					source.y = Right;
				else
					source.y = Up;
			}
			else if (x_distance > 0 && y_distance > 0)
			{
				std::cout << "BOTTOM RIGHT" << std::endl;
				if (x_distance >= y_distance)
					source.y = Right;
				else
					source.y = Down;
			}
			else if (x_distance < 0 && y_distance < 0)
			{
				std::cout << "TOP LEFT" << std::endl;
				if (x_distance * x_distance > y_distance * y_distance)
					source.y = Left;
				else
					source.y = Up;
			}
			else if (x_distance < 0 && y_distance > 0)
			{
				std::cout << "BOTTOM LEFT" << std::endl;
				if (x_distance * x_distance > y_distance * y_distance)
					source.y = Left;
				else
					source.y = Down;
			}

			// Move the player in the direction they are facing
			if (source.y == Up)
				playerImage.move(0, -1);
			else if (source.y == Down)
				playerImage.move(0, 1);
			else if (source.y == Left)
				playerImage.move(-1, 0);
			else if (source.y == Right)
				playerImage.move(1, 0);
		}
		else if(!sf::Mouse::isButtonPressed(sf::Mouse::Right))
			//updateFrame = false;

		// Limit the frames
		std::cout << clock.getElapsedTime().asSeconds() << std::endl;

		if (updateFrame)
			frameCounter += frameSpeed * clock.restart().asSeconds();
		else
			frameCounter = 0;

		frameCounter += frameSpeed * clock.restart().asSeconds();
		if (frameCounter >= switchFrame)
		{
			frameCounter = 0;
			source.x++;
			if (source.x * 32 >= pTexture.getSize().x)
				source.x = 0;
		}
		
		// Update the window
		std::cout << "updateFrame: " << updateFrame << std::endl;
		playerImage.setTextureRect(sf::IntRect(source.x * 32, source.y * 32, 32, 32));
		Window.draw(playerImage);
		Window.display();
		Window.clear();
	}
}
