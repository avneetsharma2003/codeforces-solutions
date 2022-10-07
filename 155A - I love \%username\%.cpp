#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, min, max, amazing = 0;
    cin >> n >> x;
    min = x; max = x;
    for(int i = 1; i < n; i++) {
        cin >> x;
        if (x < min) {
            amazing++;
            min = x;
        } else if (x > max) {
            amazing++;
            max = x;
        }
    }
    cout << amazing << endl;
    return 0;
}
