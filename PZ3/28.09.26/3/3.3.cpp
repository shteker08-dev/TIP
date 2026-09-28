#include <iostream>
#include <cmath>

class tens{
    int a;
    public:
        tens(int chislo) : a(chislo) {}
    int ten() {
        return (a / 10) % 10;
    }
};

int main()
{
    int a;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> a;
    tens kok = tens(a);
    std::cout << "The tens digit is equal to " << kok.ten() << std::endl;
    
}