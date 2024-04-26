// main.cpp
#include <iostream>
#include "add.cpp"
#include "readval.cpp"

int main() {
    int a, b;
    
    // Call readValues() function to get the values of 'a' and 'b'
    readValues(a, b);
    
    // Print the values of 'a' and 'b' with a message
    std::cout << "Current value of a: " << a << std::endl;
    std::cout << "Current value of b: " << b << std::endl;
    
    // Call the add() function to add 'a' and 'b'
    int result = add(a, b);
    std::cout << "Result of addition: " << result << std::endl;
    
    return 0;
}
