#include <iostream>

// Define an enumeration type
enum Color { RED, GREEN, BLUE };

int main() {
    int intValue = 2;
    char charValue = 'B';
    Color colorValue = GREEN;

    // Switch with integer value
    switch (intValue) {
        case 1:
            std::cout << "Integer is 1" << std::endl;
            break;
        case 2:
            std::cout << "Integer is 2" << std::endl;
            break;
        default:
            std::cout << "Integer is something else" << std::endl;
            break;
    }

    // Switch with character value
    switch (charValue) {
        case 'A':
            std::cout << "Character is A" << std::endl;
            break;
        case 'B':
            std::cout << "Character is B" << std::endl;
            break;
        default:
            std::cout << "Character is something else" << std::endl;
            break;
    }

    // Switch with enumeration value
    switch (colorValue) {
        case RED:
            std::cout << "Color is RED" << std::endl;
            break;
        case GREEN:
            std::cout << "Color is GREEN" << std::endl;
            break;
        case BLUE:
            std::cout << "Color is BLUE" << std::endl;
            break;
        default:
            std::cout << "Unknown Color" << std::endl;
            break;
    }

    // Switch with floating-point value (invalid)
    /*
    float floatValue = 3.14;
    switch (floatValue) {
        case 1.1:
            std::cout << "Float is 1.1" << std::endl;
            break;
        case 2.2:
            std::cout << "Float is 2.2" << std::endl;
            break;
        default:
            std::cout << "Float is something else" << std::endl;
            break;
    }
    */

    // Switch with string value (invalid)
    /*
    std::string stringValue = "Hello";
    switch (stringValue) {
        case "Hello":
            std::cout << "String is Hello" << std::endl;
            break;
        case "World":
            std::cout << "String is World" << std::endl;
            break;
        default:
            std::cout << "String is something else" << std::endl;
            break;
    }
    */

    // Not work with double also
    return 0;
}
