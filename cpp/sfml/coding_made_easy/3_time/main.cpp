#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow Window;
  Window.create(sf::VideoMode(800, 600), "My first SFML Game");

  sf::Clock clock;

  sf::Time time;

  std::cout << time.asSeconds() << std::endl;

  while (Window.isOpen())
  {
    sf::Event Event;
    while (Window.pollEvent(Event))
    {
      if (Event.type == sf::Event::Closed)
        Window.close();
    }
    time = clock.restart();
    std::cout << time.asSeconds() << std::endl;

    Window.display();
  }
}
