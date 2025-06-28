#include <SFML/Graphics.hpp>

#include "Apple/Apple-snake_interaction.hpp"
#include "Player/Snake.hpp"
#include "Apple/Apple.hpp"
#include "Player/Collision.hpp"

using namespace sf;

int main() {
    RenderWindow window(VideoMode(1000, 800), "Snake Game");
    window.setFramerateLimit(120);

    auto* snake = new RectangleShape();
    *snake = snakeDraw();

    auto* apple = new RectangleShape();
    *apple = appleDraw();


    while (window.isOpen()) {

        Event event{};
        while (window.pollEvent(event)) {
            if (event.type == Event::Closed) {
                window.close();
            }
        }

        snakeMovement(snake);
        apple_snake_collision(snake, apple);
        snake_collision(snake);
        window.clear();
        window.draw(*snake);
        window.draw(*apple);
        window.display();
    }
    return 0;
}
