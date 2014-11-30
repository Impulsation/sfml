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
				case sf::Event::JoystickConnected:
					std::cout << "Joystick " << Event.joystickConnect.joystickId + 1
										<< " is Connected." << std::endl;
					break;
				case sf::Event::JoystickDisconnected:
					std::cout << "Joystick " << Event.joystickConnect.joystickId + 1
										<< " is Disconnected." << std::endl;
				case sf::Event::JoystickButtonPressed:
					std::cout << "Button: " << Event.joystickButton.button << std::endl;
					break;
				case sf::Event::JoystickMoved:
					if (Event.joystickMove.axis == sf::Joystick::X)
					{
						std::cout << "Position: " << Event.joystickMove.position << std::endl;
					}
					break
			}
		}
		Window.display();
	}

