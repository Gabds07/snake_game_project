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

void snakeMovement(RectangleShape &snake) {
    if (Keyboard::isKeyPressed(Keyboard::Key::D) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake.setSize(Vector2f(100, 20));
        snake.move({1.0f, 0.f});
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::A) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake.setSize(Vector2f(100, 20));
        snake.move({-1.0f, 0.f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake.setSize(Vector2f(20, 100));
        snake.move({0.f, 1.0f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
        snake.setSize(Vector2f(20, 100));
        snake.move({0.f, -1.0f});
    }
}
