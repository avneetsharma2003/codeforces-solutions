#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int min = a, max = a, idx_min = 0, idx_max = 0;
    for (int i = 1; i < n; i++) {
        cin >> a;
        if (a > max) {
            max = a;
            idx_max = i;
        }
        if (a <= min) {
            min = a;
            idx_min = i;
        }
    }
    cout << idx_max + (n - 1 - idx_min) - (idx_min < idx_max ? 1 : 0) << endl;
    return 0;
}
