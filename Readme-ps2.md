# PS2: Hexaflake

## Contact
Name: Nicole Ramirez
Section: 2040
Time to Complete: 6 hours

## Description
This project involves creating a visually appealing fractal pattern known as the Hexaflake. The Hexaflake is generated using recursive function calls that draw hexagons at decreasing scales, ultimately forming a complex and symmetrical pattern resembling a snowflake. The application is developed in C++ using the SFML library for rendering the graphics.

### Features
- **Recursive Drawing**: Implemented a recursive algorithm to draw hexagons in a fractal pattern.
- **Color Gradients**: Added functionality to change the color of hexagons based on their depth in the recursion, enhancing the visual complexity of the pattern.
- **Dynamic Rotation**: Incorporated a feature allowing the entire hexaflake to be rotated based on a command-line argument, making the visualization more versatile.

Major decisions included:
- **Recursion for Fractal Generation**: Opted for a recursive approach to naturally implement the self-similar nature of fractals.
- **Color Gradation Based on Depth**: Implemented to add visual depth and improve aesthetics, making the pattern more engaging.

### Issues
- **Color Cycling**: Initially struggled with getting the colors to cycle correctly at different depths. Resolved by adjusting the modulo operation based on the recursion depth.
- **Linking Errors**: Encountered and fixed several linking errors related to function signatures and SFML library integration.
- **Performance Optimization**: Managing recursion depth to prevent excessive computational load and maintain responsiveness.

### Extra Credit
- **Implemented Color Gradients**: Enhanced the visual output by dynamically changing colors based on the hexagon's vertical position in the window, creating a gradient effect from top to bottom.
- **Rotation Feature**: Added functionality to rotate the hexaflake based on user input, allowing for customized visualization angles.

## Acknowledgements

- **Online Resources**:
https://www.sfml-dev.org/documentation/2.5.1/classsf_1_1CircleShape.php

Daly, J. (2024). COMP.20 May 20,2024. Umass Lowell. 
https://echo360.org/lesson/G_af7e2ce4-3be1-4de0-9bef-55329c36d218_598bb0f6-7465-468d-8682-2edbed031896_2024-05-20T10:30:00.000_2024-05-20T12:50:00.000/classroom?focus=Video#sortDirection=desc

Fractal Graphics - "snowflake.zip" by James, Daly
