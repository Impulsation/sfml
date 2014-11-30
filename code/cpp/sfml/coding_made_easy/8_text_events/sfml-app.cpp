#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

int main()
{
	sf::RenderWindow Window;
	Window.create(sf::VideoMode(800, 600), "SFML Window");

	std::string display;


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
				case sf::Event::TextEntered:
					if (Event.text.unicode >= 33 && Event.text.unicode <= 126)
						display += (char)Event.text.unicode;
					else if (Event.text.unicode == 8)
						display = display.substr(0, display.length() - 1);

					system("clear");
					std::cout << display << std::endl;
					std::cout << (char)Event.text.unicode << std::endl;
					break;
			}
		}
		Window.display();
	}
}
