#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	enum Direction { Down, Left, Right, Up };

	sf::Vector2i source(1 , Down);

	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

	sf::Texture pTexture;
	sf::Sprite playerImage;

	if (!pTexture.loadFromFile("image.png"))
		std::cout << "Error: could not load player image" << std::endl;

	playerImage.setTexture(pTexture);

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
				case sf::Event::KeyPressed:
					if (Event.key.code == sf::Keyboard::Up)
						source.y = Up;
					else if (Event.key.code == sf::Keyboard::Down)
						source.y = Down;
					else if (Event.key.code == sf::Keyboard::Right)
						source.y = Right;
					else if (Event.key.code == sf::Keyboard::Left)
						source.y = Left;
					break;
			}	
		}

		source.x++;
		if (source.x * 32 >= pTexture.getSize().x)
			source.x = 0;
		playerImage.setTextureRect(sf::IntRect(source.x * 32, source.y * 32, 32, 32));
		Window.draw(playerImage);
		Window.display();
		Window.clear();
	}
}
