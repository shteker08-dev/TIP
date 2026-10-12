#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    int st[1000];
    int top = 0;

    while (n > 0) {
        int x;
        cin >> x;

        if (top > 0 && st[top - 1] == x) {
            top--;
            ans += 2;
        } else {
            st[top++] = x;
        }
        n--;
    }

    cout << ans << endl;
    return 0;
}