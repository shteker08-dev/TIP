#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    if (n <= 0) {
        cout << 0 << endl;
        return 0;
    }

    int st[1000];
    int top = 0;

    do {
        int x;
        cin >> x;

        if (top > 0 && st[top - 1] == x) {
            top--;
            ans += 2;
        } else {
            st[top++] = x;
        }
        n--;
    } while (n > 0);

    cout << ans << endl;
    return 0;
}