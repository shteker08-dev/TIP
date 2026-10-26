#include <windows.h>
#include <iostream>
using namespace std;

long long NOD(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    return NOD(b, a % b);
}


int main(){
    SetConsoleOutputCP(65001);
    long long a, b;
    cout << "Введите первое число: ";
    cin >> a;
    cout << "Введите второе число: ";
    cin >> b;
    cout << "НОД чисел: " << NOD(a,b);
    return 0;

}   