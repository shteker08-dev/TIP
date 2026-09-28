#include <iostream>
#include <cmath>

class Triangle {
    int a, b;
public:
    Triangle(int katetA, int katetB) : a(katetA), b(katetB) {}
    double hypotenuse(){
        return std::sqrt(a * a + b * b);
    }
};

int main() {
    int a, b;
    std::cout << "first catet: ";
    std::cin >> a;
    std::cout << "second catet: ";
    std::cin >> b;
    Triangle tri(a, b);
    std::cout << "hypotenuse: " << tri.hypotenuse() << std::endl;
    return 0;
}