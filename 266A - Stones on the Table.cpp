#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = 0;
    for(int i = 0; i < n - 1; i++) {
        if(s[i + 1] == s[i])
            ans++;
    }
    cout << ans;
    return 0;
}
