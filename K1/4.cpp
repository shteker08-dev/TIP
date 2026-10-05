#include <iostream>
#include <cmath>
using namespace std;

int main()
// Начальная инициализация переменных a, b, c и символа для выбора действия
{   
    double a,b,c;
    char symbol;
    
    cout << "Введите a: ";
    cin >> a;

    cout << "Введите b: ";
    cin >> b;

    cout << "Введите c: ";
    cin >> c;

    cout << "Введите символ: ";
    cin >> symbol;
// Обработка символа 'D' для вывода имени
    if (symbol == 'D')
    {
        cout << "Bogaichuck Ignat" << endl;
    }
    //Обработка символа 'q' для решения квадратного уравнения
    else if (symbol == 'q')
    {
        // Решение квадратного уравнения ax^2 + bx + c = 0
        // Если a = 0, то уравнение становится линейным: bx + c = 0
        if (a == 0)
        {
            if (b == 0)
            {
                if (c == 0)
                    cout << "Бесконечное количество решений" << endl;
                else
                    cout << "Нет решений" << endl;
            }
            else
            //Если a = 0 и b != 0, то уравнение имеет одно решение: x = -c / b
            {
                cout << "x = " << -c / b << endl;
            }
        }
        else
        {
            // Вычисляем дискриминант квадратного уравнения
            double discriminant = b * b - 4 * a * c;
            if (discriminant > 0)
            {
                double x1 = (-b + sqrt(discriminant)) / (2 * a);
                double x2 = (-b - sqrt(discriminant)) / (2 * a);
                // Выводим два действительных решения
                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
            else if (discriminant == 0)
            {
            //Если дискриминант равен нулю, то уравнение имеет одно действительное решение
                double x = -b / (2 * a);
                cout << "x = " << x << endl;
            }
            else
            {
                cout << "Нет действительных решений" << endl;
            }
        }
    }
    // Обработка символа 'a' для вычисления площади прямоугольника
    else{
        if (symbol == 'a')
        {
            double side1,side2;
            cout << "Введите первую сторону: ";
            cin >> side1;
            cout << "Введите вторую сторону: ";
            cin >> side2;
            double area = side1 * side2;
            cout << "Площадь прямоугольника: " << area << endl;
        }
    }
}