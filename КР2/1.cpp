#include <iostream>
#include <windows.h>
using namespace std;

long long to_power(long long value,long long power){
    long long result = 1;
    long long base = value;
    if (power == 0) {
        return 1;
    }
    while (power > 0) {
        if (power % 2 == 1){
            result *= base;
        }
        base *= base;
        power /= 2;
    }
    return result;
}


double fast_pow_recursive(double value, long long power) {
    if (power == 0) {
        return 1.0;
    }
    if (power < 0) {
        return 1.0 / fast_pow_recursive(value, -power);
    }
    if (power % 2 == 0) {
        double half = fast_pow_recursive(value, power / 2);
        return half * half;
    }
    return value * fast_pow_recursive(value, power - 1);
}





int main(){
    SetConsoleOutputCP(65001);
    long long price = to_power(0, 12);
    cout << price << endl;
    long long price2 = fast_pow_recursive(10,12);
    cout << price2;
    
}