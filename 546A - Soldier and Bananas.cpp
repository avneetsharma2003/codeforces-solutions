#include <iostream>

using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;
    int sum = (w * (w + 1) / 2) * k;
    int ans = sum - n;
    if(ans > 0) cout << ans;
    else cout << 0;
    return 0;
}
