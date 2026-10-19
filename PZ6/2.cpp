
#include <iostream>
using namespace std;

int main() {
    int N, M, W;
    cin >> N >> M >> W;

    char pole[32][32];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            pole[i][j] = '0';

    for (int i = 0; i < W; i++) {
        int x, y;
        cin >> x >> y;
        pole[x - 1][y - 1] = '*';
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (pole[i][j] == '*')
                continue;

            for (int dx = -1; dx <= 1; dx++) {
                for (int dy = -1; dy <= 1; dy++) {
                    int x = i + dx;
                    int y = j + dy;

                    if (x >= 0 && x < N && y >= 0 && y < M) {
                        if (pole[x][y] == '*')
                            pole[i][j]++;
                    }
                }
            }
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++)
            cout << pole[i][j];
        cout << endl;
    }

    return 0;
}
