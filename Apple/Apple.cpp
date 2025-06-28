#include <SFML/Graphics.hpp>
#include "Apple.hpp"
#include <cstdlib>

using namespace std;
using namespace sf;

RectangleShape appleDraw() {
    const float randomNum_x = 1 + rand() % 980;
    const float randomNum_y = 1 + rand() % 780;

    RectangleShape apple;
    apple.setSize(Vector2f(20, 20));
    apple.setFillColor(Color::Red);
    apple.setPosition(randomNum_x, randomNum_y);

    return apple;
}
