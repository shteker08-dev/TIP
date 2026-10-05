#include <iostream>

using namespace std;

int main()
{
    double a, b, c;

    cout << "Введите a: ";
    cin >> a;

    cout << "Введите b: ";
    cin >> b;

    cout << "Введите c: ";
    cin >> c;

    // Вычисляем упрощённое выражение:
    // 2.8(5b - 6c) - (7b - 8a) * 1.2
    // = 9.6a + 5.6b - 16.8c
    
    double result = 9.6 * a + 5.6 * b - 16.8 * c;

    cout << "Результат: " << result << endl;

    return 0;
}