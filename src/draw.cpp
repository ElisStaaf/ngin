#include "engine.h"

#include <SFML/Graphics.hpp>
using namespace sf;
 
void Engine::draw()
{
    // Rub out the last frame
    m_Window.clear(Color::White);
 
    // Draw the background
    m_Window.draw(m_BackgroundSprite);
    m_Window.draw(m_Bob.getSprite());
 
    // Show everything we have just drawn
    m_Window.display();
}
