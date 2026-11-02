#include <fstream>
#include <string>
#include <algorithm>
#include <iostream>

std::string toBinary(std::string number) {
    if (number == "0") {
        return "0";
    }

    std::string binary;

    while (!number.empty()) {
        std::string quotient;
        int remainder = 0;

        for (char digit : number) {
            int value = remainder * 10 + (digit - '0');
            int nextDigit = value / 2;
            remainder = value % 2;

            if (nextDigit != 0 || !quotient.empty()) {
                quotient += char('0' + nextDigit);
            }
        }

        binary += char('0' + remainder);
        number = quotient;
    }

    std::reverse(binary.begin(), binary.end());
    return binary;
}

int main() {
    std::ifstream input("input.txt");
    std::ofstream output("output.txt");

    std::string text;
    std::getline(input, text);

    std::size_t i = 0;

    while (i < text.size()) {
        if (text[i] >= '0' && text[i] <= '9') {
            std::size_t start = i;

            while (i < text.size() && text[i] >= '0' && text[i] <= '9') {
                ++i;
            }

            output << toBinary(text.substr(start, i - start));
        } else {
            output << text[i];
            ++i;
        }
    }
    std::cout << "Done!!!";
    return 0;
}