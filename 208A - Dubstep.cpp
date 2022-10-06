#include <bits/stdc++.h>
using namespace std;

int main() {
    string song;
    cin >> song;
    for (int i = 0; i < song.length() ; i++) {
        if (song[i] == 'W' && song[i + 1] == 'U' && song[i + 2] == 'B') {
            song[i] = song[i + 1] = song[i + 2] = '\0';
        }
    }
    int count = 0;
    for (int i = 0; i < song.length(); i++) {
        if (song[i] != '\0') {
            count++;
            cout << song[i];
        } else if (count != 0 && song[i] == '\0' && song[i+1] != '\0') {
            cout << " ";
        }
    }
    return 0;
}
