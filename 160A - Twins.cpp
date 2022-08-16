#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, sum = 0;
    cin >> n;
    vector<int> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i];
        sum += v[i];
    }
    sort(v.begin(), v.end());
    int new_sum = 0, ans = 0;
    for(int i = n - 1; i >= 0; i--) {
        new_sum += v[i];
        ans++;
        if(new_sum > sum - new_sum) break;
    }
    cout << ans;
    return 0;
}
