// std::cout => Scope Resolution Operator
// #include => Preprocessor directive is nothing but a block of code that is processed before the start of compilation
// The scope resolution operator (::) in C++ is used to access a global variable when there is a local variable with the same name, or to define a function    outside a class. It also helps in specifying a namespace, class, or enum scope explicitly to avoid naming conflicts.

// Variables are named storage locations in memory that hold data that can be modified during program execution. They have a type, which determines the kind of data they can store.

// Data Types specify the type of data that a variable can hold. They define the size and layout of the variable's memory, the range of values it can store, and the operations that can be performed on it.

// In memory 1 byte is the smallest addressable space, hence for boolean also if it is taking just one bit we use all 8 bits




#include <iostream>
#include <climits>

int x = 10; // Global variable

namespace Namespace1 {
    void display() {
        std::cout << "Hello from Namespace1!" << std::endl;
    }
}

class MyClass {
public:
    void display();
};

// Function definition using the scope resolution operator
void MyClass::display() {
    std::cout << "Hello from MyClass!" << std::endl;
}

int main() {
    int x = 20; // Local variable
    std::cout << "Local x: " << x << std::endl; // Prints the local variable
    std::cout << "Global x: " << ::x << std::endl; // Prints the global variable using the scope resolution operator
    Namespace1::display();
    // Variable declaration and initialization
    int age = 25;            // 'int' is a data type representing integer values
    double height = 5.9;     // 'double' is a data type for floating-point numbers
    char grade = 'A';        // 'char' is a data type for single characters
    bool isStudent = true;   // 'bool' is a data type for boolean values (true or false)

    // Output the values of the variables
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << std::endl;
    std::cout << "Grade: " << grade << std::endl;
    std::cout << "Is Student: " << std::boolalpha << isStudent << std::endl;

    std::cout << "Ranges of signed and unsigned integers:\n\n";

    // short
    std::cout << "short:\n";
    std::cout << "Signed: " << SHRT_MIN << " to " << SHRT_MAX << std::endl;
    std::cout << "Unsigned: 0 to " << USHRT_MAX << std::endl << std::endl;

    // int
    std::cout << "int:\n";
    std::cout << "Signed: " << INT_MIN << " to " << INT_MAX << std::endl;
    std::cout << "Unsigned: 0 to " << UINT_MAX << std::endl << std::endl;

    // long
    std::cout << "long:\n";
    std::cout << "Signed: " << LONG_MIN << " to " << LONG_MAX << std::endl;
    std::cout << "Unsigned: 0 to " << ULONG_MAX << std::endl << std::endl;

    // long long
    std::cout << "long long:\n";
    std::cout << "Signed: " << LLONG_MIN << " to " << LLONG_MAX << std::endl;
    std::cout << "Unsigned: 0 to " << ULLONG_MAX << std::endl;
    return 0;
}
