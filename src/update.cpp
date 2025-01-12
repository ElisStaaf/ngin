#include "engine.h"

#include <SFML/Graphics.hpp>
using namespace sf;
 
using namespace sf;
 
void Engine::update(float dtAsSeconds)
{
    m_Bob.update(dtAsSeconds);
}
