// Copyright 2024 Nicole Ramirez

#ifndef HEXA_HPP
#define HEXA_HPP

#include <SFML/Graphics.hpp>

// Declare the hexaflake function with the additional rotation parameter
void hexaflake(sf::RenderWindow& window, double x, double y,
double side, int maxDepth, int currentDepth, double windowHeight, double rotation = 0);

#endif  // HEXA_HPP
