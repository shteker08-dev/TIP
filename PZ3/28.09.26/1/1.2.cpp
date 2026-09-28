#include <iostream>
#include <cmath>

int hypotenuse(int a, int b) {
    return sqrt(a * a + b * b);
}


int main()
{
    int a, b;
    std::cout << "first catet: ";
    std::cin >> a;
    std::cout << "second catet: ";
    std::cin >> b;
    std::cout << "hypotenuse equals: " << hypotenuse(a,b);
}