#include <bits/stdc++.h>
using namespace std;

int n, mas[26];
string s;

int main() {
    cin >> n >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] > 96) {
            mas[(int) s[i] - 97] = 1;
        } else {
            mas[(int) s[i] - 65] = 1;
        }
    }
    if (*min_element(mas, mas + 26) == 0) {
        cout << "NO";
    } else {
        cout << "YES";
    }
    return 0;
}
