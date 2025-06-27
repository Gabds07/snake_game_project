#include <SFML/Graphics.hpp>
#include "Player/Snake.hpp"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(1000, 800), "Snake Game");

    RectangleShape snake = snakeDraw();

    while (window.isOpen()) {
        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        snakeMovement(snake);
        window.clear();
        window.draw(snake);
        window.display();
    }
    return 0;
}
