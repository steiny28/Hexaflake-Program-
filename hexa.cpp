// Copyright 2024 Nicole Ramirez
#include <cmath>
#include <vector>
#include "hexa.hpp"
#include <SFML/Graphics.hpp>

// Function to calculate color based on vertical position
sf::Color calculateColor(double y, double windowHeight) {
    // Normalize y based on the window height
    double normalized = y / windowHeight;

    // Create gradient from green to red (you can adjust these colors)
    sf::Color topColor = sf::Color::Yellow;
    sf::Color bottomColor = sf::Color::Red;

    // Interpolate between the colors based on the normalized position
    return sf::Color(
        (1 - normalized) * topColor.r + normalized * bottomColor.r,
        (1 - normalized) * topColor.g + normalized * bottomColor.g,
        (1 - normalized) * topColor.b + normalized * bottomColor.b);
}

// Helper function to draw a hexagon
void drawHexagon(sf::RenderWindow& window, double x, double y,
double side, double windowHeight, double rotation) {
    sf::CircleShape hexagon(side, 6);  // Create a hexagon with 6 sides
    hexagon.setOrigin(side, side);  // Center the hexagon
    hexagon.setPosition(x, y);  // Set the position
    hexagon.setRotation(30 + rotation);  // Rotate to make hexagon point upwards

    // Set the color based on vertical position
    hexagon.setFillColor(calculateColor(y, windowHeight));
    window.draw(hexagon);  // Draw the hexagon
}

// Define the hexaflake function
void hexaflake(sf::RenderWindow& window, double x, double y,
double side, int maxDepth, int currentDepth, double windowHeight, double rotation) {
    if (currentDepth >= maxDepth) {
        drawHexagon(window, x, y, side, windowHeight, rotation);
    } else {
        // Calculate new side length for smaller hexagons
        double newSide = side / 3;

        // Recursive call for the center hexagon
        hexaflake(window, x, y, newSide, maxDepth,
                currentDepth + 1, windowHeight, rotation);

        // Loop to draw surrounding hexagons
        for (int i = 0; i < 6; i++) {
            double angle_deg = 60 * i;
            double angle_rad = angle_deg * M_PI / 180;
            double offsetX = 2 * newSide * cos(angle_rad);
            double offsetY = 2 * newSide * sin(angle_rad);
            hexaflake(window, x + offsetX, y + offsetY, newSide,
                    maxDepth, currentDepth + 1, windowHeight, rotation);
        }
    }
}
