cmake_minimum_required(VERSION 3.31)
project(snake-game-project)

set(CMAKE_CXX_STANDARD 20)

find_package(SFML 2.6 COMPONENTS graphics window system REQUIRED)

add_executable(snake-game-project main.cpp
        Player/Snake.hpp
        Player/Snake.cpp
        Apple/Apple.cpp
        Apple/Apple.hpp
)

target_link_libraries(snake-game-project sfml-graphics sfml-window sfml-system)
