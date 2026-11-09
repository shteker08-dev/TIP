#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N, D;
    cin >> N >> D;

    long long a[1000];

    // Вводим калорийность пирожков
    for (int i = 0; i < N; i++) {
        cin >> a[i];
    }

    // Сортируем массив по возрастанию
    sort(a, a + N);

    // Границы поиска ответа
    long long left = 0;
    long long right = a[N - 1] - a[0];

    while (left < right) {
        long long mid = (left + right) / 2;

        int days = 1; // Количество нужных дней
        long long mn = a[0]; // Первый пирожок дня

        // Распределяем пирожки по дням
        for (int i = 1; i < N; i++) {

            // Если разница слишком большая
            if (a[i] - mn > mid) {
                days++; // Начинаем новый день
                mn = a[i];
            }
        }

        // Если уложились в D дней
        if (days <= D) {
            right = mid;
        } else {
            left = mid + 1;
        }
    }

    cout << left;

    return 0;
}
