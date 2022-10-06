#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans(0);
    vector<int> h(n), a(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i] >> a[i];
        for (int j = 0; j < i; j++) {
            if (h[i] == a[j]) {
                ans += 1;
            }
            if (a[i] == h[j]) {
                ans += 1;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
