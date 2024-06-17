#include <iostream>
#include <string>

int main() {
    int number;
    std::string text;

    std::cout << "Enter a number: ";
    std::cin >> number;

    // Check if the previous extraction failed
    if (std::cin.fail()) {
        std::cerr << "Error: Invalid input. Please enter a valid number." << std::endl;

        // Clear the error flag on cin
        std::cin.clear();

        // Ignore the rest of the current line to prepare for new input
        std::cin.ignore();
    } else {
        // Ignore the newline character left in the input buffer by previous input
        std::cin.ignore();

        std::cout << "Enter some text: ";
        std::getline(std::cin, text);

        std::cout << "You entered the number: " << number << std::endl;
        std::cout << "You entered the text: " << text << std::endl;
    }

    return 0;
}
