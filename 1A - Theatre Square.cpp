#include<bits/stdc++.h>

using namespace std;

int main() {
    float n, m, a, b;
    int ans;
    while (cin >> n >> m >> a) {
      b = n * m;
      ans = ceil(m / a) * ceil(n / a);
      cout << ans << endl;
    }
    return 0;
}
