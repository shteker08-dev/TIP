#include <iostream>
#include <cmath>
int main()
{
    int a, b, c;
    std::cout << "first catet:";
    std::cin >> a;
    std::cout << "second catet:";
    std::cin >> b;
    c = sqrt(a * a + b * b);
    std::cout << "hypotenuse equals: " << c;
}