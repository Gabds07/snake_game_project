#include <SFML/Graphics.hpp>
#include <random>

#include "Apple-snake_interaction.hpp"

using namespace std;
using namespace sf;

void apple_snake_collision(RectangleShape * &snake, RectangleShape * &apple) {
    minstd_rand generator;
    uniform_real_distribution<float> distribution_x(1.f, 780.f);
    uniform_real_distribution<float> distribution_y(1.f, 980.f);

    if (snake->getPosition() == apple->getPosition())
        apple->setSize({0.f, 0.f});

    if (apple->getSize() == Vector2f(0.f, 0.f)) {
        RenderWindow appleRender;
        apple->setPosition(distribution_x(generator), distribution_y(generator));
        appleRender.draw(*apple);
    }
}
