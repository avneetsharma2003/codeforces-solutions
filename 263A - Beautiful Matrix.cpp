#include <iostream>

using namespace std;

int main() {
    int arr[5][5], m, n, flag = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                m = i;
                n = j;
                flag = 1;
                break;
            }
        }
        if(flag == 1) break;
    }
    cout << abs(2 - m) + abs(2 - n);
    return 0;
}
