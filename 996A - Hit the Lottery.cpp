#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, arr[5] = {100, 20, 10, 5, 1}, ans = 0;
    cin >> n;
    for (int i = 0; i < 5; i++) {
        ans += n / arr[i];
        n = n % arr[i];
    }
    cout << ans << endl;
    return 0;
}
