//Напишите программу, которая считывает дату в формате "дд.мм.гггг" и выводит её в формате "гггг-мм-дд".
#include <iostream>
#include <string>

int main() {
    std::string date;
    std::cout << "Введите дату в формате дд.мм.гггг: ";
    std::cin >> date;

    if (date.length() != 10 || date[2] != '.' || date[5] != '.') {
        std::cerr << "Неверный формат даты!" << std::endl;
        return 1;
    }

    std::string day = date.substr(0, 2);
    std::string month = date.substr(3, 2);
    std::string year = date.substr(6, 4);

    std::cout << year << "-" << month << "-" << day << std::endl;

    return 0;
}