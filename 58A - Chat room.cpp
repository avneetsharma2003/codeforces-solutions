#include<iostream>

using namespace std;

int main() {
    string word, hello = "hello";
    cin >> word;
    int j = 0, flag = 0;
    for(int i = 0; i < word.size(); i++) {
        if(word[i] == hello[j]){
            j++;
        }
        if(j == 5) flag = 1;
    }
    if(flag == 1) cout << "YES";
    else cout << "NO";
    return 0;
}
