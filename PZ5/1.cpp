#include <iostream>
using namespace std;

int main() {
    int n, ans = 0;
    cin >> n;

    int st[1005];
    int top = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (top > 0 && st[top - 1] == x) {
            top--;
            ans += 2;
        } else {
            st[top++] = x;
        }
    }

    cout << ans << endl;
    return 0;
}
