#include <iostream>
#include <string>
#include <fstream>

int main() {
    std::ifstream file("2.txt");
    std::string line;

    while (std::getline(file, line)) {
        for (char& c : line) {
            if (c == ' ') {
                c = '_';
            }
        }
        std::cout << line << std::endl;
    }

    return 0;
}
