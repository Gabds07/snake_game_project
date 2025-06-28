#include <SFML/Graphics.hpp>
#include "./Snake.hpp"

using namespace sf;

RectangleShape snakeDraw() {
    RectangleShape snake;
    snake.setSize(Vector2f(100, 20));
    snake.setFillColor(Color::Green);
    snake.setPosition(450, 550);

    return snake;
}

void snakeMovement(RectangleShape* &snake) {
    if (Keyboard::isKeyPressed(Keyboard::Key::D) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize(Vector2f(100, 20));
        snake->move({5.0f, 0.f});
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::A) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize(Vector2f(100, 20));
        snake->move({-5.0f, 0.f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize(Vector2f(20, 100));
        snake->move({0.f, 5.0f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
        snake->setSize(Vector2f(20, 100));
        snake->move({0.f, -5.0f});
    }

    if (snake->getPosition().x < 0.f) {
        snake->setPosition(0.f, snake->getPosition().y);
        snake->setScale(0.f, 0.f);
    }

    if (snake->getPosition().y < 0.f) {
        snake->setPosition(snake->getPosition().x, 0.f);
        snake->setScale(0.f, 0.f);
    }
}
