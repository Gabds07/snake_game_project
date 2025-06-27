#include <SFML/Graphics.hpp>
#include "Player/Snake.hpp"
#include "Apple/Apple.hpp"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(1000, 800), "Snake Game");

    RectangleShape snake = snakeDraw();
    RectangleShape apple = appleDraw();

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
        window.draw(apple);
        window.display();
    }
    return 0;
}
