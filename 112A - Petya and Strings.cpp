#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
    int n = strcmp(s1.c_str(), s2.c_str());
    if(n == 0) cout << 0;
    else cout << n / abs(n);
    return 0;
}
