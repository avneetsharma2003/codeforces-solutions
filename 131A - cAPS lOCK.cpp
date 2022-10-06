#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    int len, u;
    bool b;
    while (cin >> str) {
        len = str.size(), u = 0;
        b = false;
        for (int i = 0; i < len; i++) {
            if (isupper(str[i]))
                u++;
        }
        if (len == u || (islower(str[0]) && len - u == 1)) {
            b = true;
        }
        if (b) {
            for (int i = 0; i < len; i++) {
                if (isupper(str[i]))
                    str[i] = tolower(str[i]);
                else
                    str[i] = toupper(str[i]);
            }
            cout << str << endl;
        }
        else {
            cout << str << endl;
        }
    }
    return 0;
}
