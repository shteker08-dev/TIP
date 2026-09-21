#include <iostream>

int main() {
    int a;
    int b;
    std::cin >> a;
    std::cin >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    std::cout << "a = " << a << "\n" << "b = " << b;
      

    return 0;
}