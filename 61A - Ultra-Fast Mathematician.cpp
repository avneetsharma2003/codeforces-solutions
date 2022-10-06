#include <bits/stdc++.h>
using namespace std;

int main() {
    char a[101], b[101];
    cin >> a >> b;
    for (int i = 0; a[i]; i++) {
        if (a[i] == b[i]) cout << "0";
        else cout << "1";
    }
    return 0;
}
