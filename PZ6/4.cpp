#include <iostream>
using namespace std;


int main()
{
	int n;
	cin >> n;
    int mass[n][n];

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			if (i + j < n - 1)
				mass[i][j] = 0;
			else if (i + j == n - 1)
				mass[i][j] = 1;
			else
				mass[i][j] = 2;

		}
    }

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
            if (j % n == 0)
                cout << "\n";
            cout << mass[i][j] << " ";
        }
	}

}