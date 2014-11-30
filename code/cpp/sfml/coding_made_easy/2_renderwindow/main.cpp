#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow Window;
  Window.create(sf::VideoMode(800, 600), "My first SFML Game");

  sf::Vector2u size(400, 400);
  std::cout << size.x << " " << size.y << std::endl;

  Window.setSize(size);

  while (Window.isOpen())
  {
    sf::Event Event;
    while (Window.pollEvent(Event))
    {
      if (Event.type == sf::Event::Closed)
        Window.close();
    }
    Window.display();
  }
}
