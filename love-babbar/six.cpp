#include <iostream>
#include <cmath>  // For fmod

int main() {
    // Bitwise operators with integral types
    int a = 5;      // Binary: 0101
    int b = 3;      // Binary: 0011
    int result;

    result = a & b; // Bitwise AND
    std::cout << "Bitwise AND of " << a << " and " << b << " is " << result << std::endl;

    result = a | b; // Bitwise OR
    std::cout << "Bitwise OR of " << a << " and " << b << " is " << result << std::endl;

    result = a ^ b; // Bitwise XOR
    std::cout << "Bitwise XOR of " << a << " and " << b << " is " << result << std::endl;

    result = ~a;    // Bitwise NOT
    std::cout << "Bitwise NOT of " << a << " is " << result << std::endl;

    result = a << 1; // Left shift
    std::cout << "Left shift of " << a << " by 1 is " << result << std::endl;

    result = a >> 1; // Right shift
    std::cout << "Right shift of " << a << " by 1 is " << result << std::endl;

    // Modulus operator with integers
    int x = 10;
    int y = 3;
    std::cout << x << " % " << y << " = " << x % y << std::endl;

    // Modulus operator with floats using fmod
    float f1 = 10.5;
    float f2 = 3.2;
    std::cout << f1 << " % " << f2 << " = " << std::fmod(f1, f2) << std::endl;

    // Corner case in typecasting: floating-point to integer
    float pi = 3.14159;
    int truncated_pi = static_cast<int>(pi);
    std::cout << "Original float value: " << pi << std::endl;
    std::cout << "Truncated integer value: " << truncated_pi << std::endl;

    // Another corner case: large float to int
    float large_float = 1e10f;
    int cast_large_float = static_cast<int>(large_float); // Potential data loss
    std::cout << "Large float value: " << large_float << std::endl;
    std::cout << "Cast to int value: " << cast_large_float << std::endl;

    return 0;
}
