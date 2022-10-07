#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if (n <= 2) {
            cout << "0" << endl;
        }
        else {
            int a = (n / 2) + 1, b = n - 1;
            cout << (b - a) + 1 << endl;
        }
    }
    return 0;
}
