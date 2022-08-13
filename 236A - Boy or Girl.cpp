#include <iostream>

using namespace std;

int main() {
    string str;
    cin >> str;
    int letters[26] = {0};
    for(int i = 0; i < str.size(); i++) {
        if(letters[str[i] - 97] == 0)
            letters[str[i] - 97] = 1;
    }
    int dist_letters = 0;
    for(int i = 0; i < 26; i++) {
        dist_letters += letters[i];
    }
    // cout << dist_letters;
    if(dist_letters % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
    return 0;
}
