#include<iostream>

using namespace std;

int main() {
    string s;
    cin >> s;
    int flag = 1;
    for(int i = 1; i <= s.length(); i++) {
        if(s[i] == s[i-1]) {
            flag++;
            if(flag == 7){
                cout << "YES" << endl;
                return 0;
            }
        }
        else {
            flag = 1;
        }
        
    }
    cout << "NO" << endl;
    return 0;
}
