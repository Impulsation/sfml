#include <SFML/Graphics.hpp>

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
    }
    Window.display();
  }
}
