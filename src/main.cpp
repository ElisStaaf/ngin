#include "engine.h"

#include <SFML/Graphics.hpp>
using namespace sf;
 
int main()
{
    // Declare an instance of Engine
    Engine engine;
 
    // Start the engine
    engine.start();
 
    // Quit in the usual way when the engine is stopped
    return 0;
}
