#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, a, b, ans;
    cin >> t;
    while (t--) {
        cin >> a >> b;
        ans =  ((a % b == 0) ? 0 : (b - (a % b)));
        cout << ans << endl;
    }
    return 0;
}
