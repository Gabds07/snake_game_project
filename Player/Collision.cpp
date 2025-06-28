#include <SFML/Graphics.hpp>
#include "Collision.hpp"

using namespace sf;

void snake_collision(RectangleShape * &snake) {
    int const WINDOW_WIDTH = 1000, WINDOW_HEIGHT = 800;

    if (snake->getPosition().x + snake->getGlobalBounds().width > WINDOW_WIDTH) {
        snake->setPosition(WINDOW_WIDTH - snake->getGlobalBounds().width, snake->getPosition().y);
        snake->setSize({0.f, 0.f});
    } else if (snake->getPosition().y + snake->getGlobalBounds().height > WINDOW_HEIGHT) {
        snake->setPosition(snake->getPosition().x, WINDOW_HEIGHT - snake->getGlobalBounds().height);
        snake->setScale(0.f, 0.f);
        snake->setSize({0.f, 0.f});
    }
}
