#include <SFML/Graphics.hpp>
using namespace std;

int main()
{
  // create the window
  sf::RenderWindow window(sf::VideoMode(800, 600), "My Window");
  
  // run the program as long as the window is open
  while (window.isOpen())
  {
    // check all the window's events that were triggered since the last
    // iteration of the loop
    sf::Event event;
    while (window.pollEvent(event))
    {
      // "close requested" event: we close the window
      if (event.type == sf::Event::Closed)
        window.close();
    }

    // clear the window with black color
    window.clear(sf::Color::Black);

    // draw everything here...
    // window.draw(...);
    
    // declare and load a texture
    sf::Texture texture;
    texture.loadFromFile("circle.png");
    
    // create a sprite
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setTextureRect(sf::IntRect(0, 0, 32, 32));
    // sprite.setColor(sf::Color(255, 255, 0, 200));
    sprite.setPosition(0, 568);

    window.draw(sprite);
    
    
    // end the current frame
    window.display();
  }

  return 0;
}
