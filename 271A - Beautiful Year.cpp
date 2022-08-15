#include <iostream>

using namespace std;

int main() {
    int y;
    cin >> y;
    int ans = y + 1;
    while(1) {
        int ones = ans % 10, tens = (ans / 10) % 10, hundreds = (ans / 100) % 10, thousands = ans / 1000;
        if(ones != tens && ones != hundreds && ones != thousands)
            if(tens != hundreds && tens != thousands)
                if(hundreds != thousands) break;
        ans++;
    }
    cout << ans;
    return 0;
}
