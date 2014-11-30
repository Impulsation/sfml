#include <SFML/Graphics.hpp>
#include <iostream>
#include <cmath>

int main()
{
	// Create the window
	sf::RenderWindow window;
	window.create(sf::VideoMode(800, 600), "SFML Window");

	// Load the texture
	sf::Texture player_texture;
	if (!player_texture.loadFromFile("player.png"))
		std::cout << "Error: could not load player image." << std::endl;

	// Texture the player and set its position
	sf::Sprite player;
	player.setTexture(player_texture);
	player.setOrigin(16, 16);
	player.setPosition(400, 300);

	sf::Vector2f player_position;
	sf::Vector2i player_destination;

	bool stop_player = true;

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
				case sf::Event::MouseButtonPressed:
					if (event.mouseButton.button == sf::Mouse::Right)
					{
						stop_player = false;
						player_destination = sf::Mouse::getPosition(window);
					}
					break;
				case sf::Event::KeyPressed:
					if (event.key.code == sf::Keyboard::S)
					{
						stop_player = true;
					}
					break;
			}
		}
		
		if (stop_player == false)
		{
			player_position = player.getPosition();

			// Get the angle of the cursor relative to the player
			float angle = atan2(player_destination.y - player_position.y,
													player_destination.x - player_position.x);

			// Move the player in the direction of the angle
			player.move(cos(angle), sin(angle));

			// Get the distance from the player to the destination
			float x = player_destination.x - player_position.x;
			float y = player_destination.y - player_position.y;
			float distance = sqrt (x * x + y * y);

			// Stop if the player is within 1 unit of the destination
			if (distance < 1)
				stop_player = true;
		}

		window.clear();
		window.draw(player);
		window.display();
	}
}
