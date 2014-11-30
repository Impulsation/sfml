#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

int main()
{
  sf::RenderWindow Window;
  Window.create(sf::VideoMode(800, 600), "My first SFML Game");

  std::cout << "Press a key to continue" << std::endl;

  while (Window.isOpen())
  {
    sf::Event Event;
    while (Window.pollEvent(Event))
    {
      if (Event.type == sf::Event::Closed)
        Window.close();
    }

    if (Window.waitEvent(Event))
    {
      std::cout << "Event Occurred." << std::endl;
    }

    Window.display();
  }
}
