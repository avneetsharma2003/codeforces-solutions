#include <bits/stdc++.h>

using namespace std;

int main() {
    string str, new_str;
    cin >> str;
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    for(int i = 0; i < str.size(); i++) {
        char c = str[i];
        if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y') {
            new_str.append(1, '.');
            new_str.append(1, c);
        }
    }
    cout << new_str;
    return 0;
}
