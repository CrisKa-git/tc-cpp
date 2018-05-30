#include <iostream>

int main() {
    std::cout << "Hello World!" << std::endl;
    std::cout << "Enter the numbers: " << std::endl;
    int v1, v2;
    std::cout << v1 << " : " << v2+1 << std::endl;
    std::cin >> v1 >> v2;
    std::cout << "The imp of " << v1 << " and " << v2 << " is " << v1*v2 << std::endl;
    return 0;
}
