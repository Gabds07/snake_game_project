#include <SFML/Graphics.hpp>
#include <cstdlib>

#include "Apple-snake_interaction.hpp"

using namespace std;
using namespace sf;

Vector2f generate_random_coordinates() {
    Vector2f randomNum;

    randomNum.x = 1.f + rand() % 980;
    randomNum.y = 1.f + rand() % 780;

    return randomNum;
}

void apple_snake_collision(RectangleShape * &snake, RectangleShape * &apple) {
    if (snake->getGlobalBounds().intersects(apple->getGlobalBounds())) {
        apple->setSize({0.f, 0.f});
    }

    if (apple->getSize() == Vector2f(0.f, 0.f)) {
        apple->setSize({20.f, 20.f});
        apple->setPosition(generate_random_coordinates());
    }
}
