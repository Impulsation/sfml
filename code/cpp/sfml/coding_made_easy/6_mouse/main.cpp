#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow Window;
  Window.create(sf::VideoMode(800, 600), "My first SFML Game");

  while (Window.isOpen())
  {
    sf::Event Event;
    while (Window.pollEvent(Event))
    {
      if (Event.type == sf::Event::Closed)
        Window.close();

      switch(Event.type)
      {
        case sf::Event::Closed:
          Window.close();
          break;
        case sf::Event::MouseEntered:
          std::cout << "Mouse within screen bounds" << std::endl;
          break;
        case sf::Event::MouseLeft:
          std::cout << "Mouse NOT within screen bounds" << std::endl;
          break;
        case sf::Event::MouseMoved:
          std::cout << "X: " << Event.mouseMove.x << " Y: " << Event.mouseMove.y << std::endl;
          break;
      }
    }
    
    Window.display();
  }
}
