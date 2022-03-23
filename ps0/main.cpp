//Raul Vargas
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
  sf::RenderWindow window(sf::VideoMode(1000,1000), "SFML works!");
  sf::CircleShape shape (100.f);
  shape.setFillColor(sf::Color::Green);
  
  sf::Texture texture;

        if (!texture.loadFromFile("sprite.png"))
                return -1;

  sf::Sprite sprite(texture);
  sprite.setPosition(500,500);
  
  while (window.isOpen())
    {
	window.setFramerateLimit(30);
        sf::Event event;
        while(window.pollEvent(event))
        {
          if(event.type == sf::Event::Closed)
          window.close();
        }
	/*window.clear();	
        window.draw(shape);
	window.display();*/

	sprite.setRotation(5.f);

	window.clear();

	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W))
	{  
          sprite.move(sf::Vector2f(0.0f, -50.0f));
	}
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A))
        {
          sprite.move(sf::Vector2f(-50.0f, 0.0f));
        }
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S))
        {
          sprite.move(sf::Vector2f(0.0f, 50.0f));
        }
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D))
        {
          sprite.move(sf::Vector2f(50.0f, 0.0f));
        }


	window.draw(sprite);
	window.display();
	
     }
  return 0;
}


