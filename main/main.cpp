#include <iostream>
#include "math_operations.h" // Include the header file

int main() {
    std::cout << "This is the main file." << std::endl;

    // Call functions from another file
    int sumResult = add(5, 3);
    int productResult = multiply(4, 6);

    std::cout << "Sum: " << sumResult << std::endl;
    std::cout << "Product: " << productResult << std::endl;

    return 0;
}
