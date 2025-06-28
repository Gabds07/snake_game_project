#include <SFML/Graphics.hpp>
#include "./Snake.hpp"
#include "../Apple/Apple-snake_interaction.hpp"

using namespace sf;

RectangleShape snakeDraw(RectangleShape * &snake, RectangleShape * &apple) {
    snake->setSize({80.f, 20.f});
    snake->setFillColor(Color::Green);
    snake->setPosition(450, 550);
    return *snake;
}

void snakeMovement(RectangleShape * &snake, RectangleShape * &apple) {
    if (Keyboard::isKeyPressed(Keyboard::Key::D) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize({80.f, 20.f});
        snake->move({5.0f, 0.f});
    }
    if (Keyboard::isKeyPressed(Keyboard::Key::A) &&
        !Keyboard::isKeyPressed(Keyboard::Key::W) &&
        !Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize({80.f, 20.f});
        snake->move({-5.0f, 0.f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::S)) {
        snake->setSize({20.f, 80.f});
        snake->move({0.f, 5.0f});
    }

    if (Keyboard::isKeyPressed(Keyboard::Key::W)) {
        snake->setSize({20.f, 80.f});
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
