#include <iostream>
#include <algorithm>

using namespace std;

char lower(char c) {
    if(c >= 'A' && c <= 'Z') return c + 'a' - 'A';
    return c;
}
char upper(char c) {
    if(c >= 'a' && c <= 'z') return c - 'a' + 'A';
    return c;
}

int main() {
    string s;
    cin >> s;
    int ucount = 0, lcount = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] >= 'A' && s[i] <= 'Z') ucount++;
        else lcount++;
    }
    if(ucount > lcount) transform(s.begin(), s.end(), s.begin(), upper);
    else transform(s.begin(), s.end(), s.begin(), lower);
    cout << s;
    return 0;
}
