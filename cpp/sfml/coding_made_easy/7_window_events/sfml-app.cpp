#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
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
				case sf::Event::GainedFocus:
					std::cout << "Window Active" << std::endl;
					break;
				case sf::Event::LostFocus:
					std::cout << "Window NOT Active" << std::endl;
					break;
				case sf::Event::Resized:
					std::cout << "width: " << Event.size.width << " height: "
										<< Event.size.height << std::endl;
			}
		}
		Window.display();
	}
}
