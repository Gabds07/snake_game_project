#include <SFML/Graphics.hpp>
#include "Apple.hpp"

using namespace sf;

RectangleShape appleDraw() {
    RectangleShape apple;
    apple.setSize(Vector2f(20, 20));
    apple.setFillColor(Color::Red);
    apple.setPosition(200, 450);

    return apple;
}
