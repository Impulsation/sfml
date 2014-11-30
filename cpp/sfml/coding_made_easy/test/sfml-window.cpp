#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	int up = 0, left = 0, right = 0, down = 0;
	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

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
		

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			up++;
			std::cout << "Up is pressed. Count:" << up << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			left++;
			std::cout << "Left is pressed. Count: " << left << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			right++;
			std::cout << "Right is pressed. Count: " << right << std::endl;
		}
		else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			down++;
			std::cout << "Down is pressed. Count: " << down << std::endl;
		}

		Window.display();
	}
}
