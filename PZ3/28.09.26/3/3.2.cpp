#include <iostream>
int tensDigit(int a) {
    return (a / 10) % 10;
}
int main(){
    int a;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> a;
    std::cout << "The tens digit is equal to " << tensDigit(a) << std::endl;
}