#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream input1("input1.txt");
    std::ifstream input2("input2.txt");

    std::string x, y;
    std::getline(input1, x);
    std::getline(input2, y);

    std::cout << (x.find(y) != std::string::npos ? "yes" : "no") << '\n';

    return 0;
}