#include <iostream>

using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    int N = s.size(), flag = 0;
    for(int i = 0; i < N; i++) {
        if(t[i] != s[N - 1 - i]) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout << "NO";
    else cout << "YES";
    return 0;
}
