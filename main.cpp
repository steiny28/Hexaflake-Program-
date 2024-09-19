// Copyright 2024 Nicole Ramirez
#include <iostream>
#include "hexa.hpp"
#include <SFML/Graphics.hpp>

int main(int argc, char* argv[]) {
    if (argc < 3) {
        std::cerr << "Usage: " << argv[0]
        << " side_length recursion_depth [rotation]" << std::endl;
        return 1;
    }

    double L = std::stod(argv[1]);  // Side length of the base hexagon
    int N = std::stoi(argv[2]);    // Depth of recursion
    double rotation = 0;           // Optional rotation parameter

    if (argc > 3) {
        rotation = std::stod(argv[3]);  // Get rotation degree if provided
    }

    // Create an SFML window
    sf::RenderWindow window(sf::VideoMode(800, 800),
                    "Hexaflake", sf::Style::Close);
    window.clear(sf::Color::White);  // Set background color

    // Initial call to the recursive hexaflake function
    hexaflake(window, 400, 400, L, N, 0, 800, rotation);

    // Display everything we have drawn
    window.display();
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    }

    return 0;
}
