#include <SFML/Graphics.hpp>
#include <string>
#include <iostream>

int main()
{
  sf::RenderWindow Window;
  Window.create(sf::VideoMode(800, 600), "My first SFML Game");

  std::string message = "Hello my name is Jason";
  std::string display = "";

  int index = 0;

  Window.setKeyRepeatEnabled(false);

  while (Window.isOpen())
  {
    sf::Event Event;
    while (Window.pollEvent(Event))
    {
      if (Event.type == sf::Event::Closed)
        Window.close();

      if (Event.type == sf::Event::KeyPressed)
      {
        if(Event.key.code == sf::Keyboard::Return)
        {
          display += message[index];
          index++;
          system("clear");
          std::cout << display << std::endl;
        }
      }
    }

    Window.display();
  }
}
