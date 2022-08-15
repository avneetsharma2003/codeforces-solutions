#include <iostream>

using namespace std;

int main() {
    int n, arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 777}, flag = 0;
    cin >> n;
    for(int i = 0; i < 13; i++) {
        if(arr[i] > n) break;
        if(n % arr[i] == 0) {
            flag = 1;
            break;
        }
    }
    if(flag == 1) cout << "YES";
    else cout << "NO";
    return 0;
}
