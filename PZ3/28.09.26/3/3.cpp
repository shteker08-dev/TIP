#include <iostream>
#include <cmath>
int main()
{
    int a;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> a;
    std::cout << "The tens digit is equal to " << (a / 10) % 10 << std::endl;
    
}