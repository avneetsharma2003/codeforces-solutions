#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][3], sum_x = 0, sum_y = 0, sum_z = 0;
    for(int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
        sum_x += arr[i][0];
        sum_y += arr[i][1];
        sum_z += arr[i][2];
    }
    if(sum_x == 0 && sum_y == 0 && sum_z == 0) cout << "YES";
    else cout << "NO";
    return 0;
}
