#include <iostream>
#include "C:\Users\shtek\Documents\Coding\TIP\28.09.26\1\calc.h" 

int main() {
    int a, b;
    std::cout << "first catet: ";
    std::cin >> a;
    std::cout << "second catet: ";
    std::cin >> b;
    int c = calculateHypotenuse(a, b);
    std::cout << "hypotenuse equals: " << c;
    return 0;
}