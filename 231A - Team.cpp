#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][3];
    for(int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2];
    }
    int ans = 0;
    for(int i = 0; i < n; i++) {
        if((arr[i][0] == 1 && arr[i][1] == 1) || (arr[i][0] == 1 && arr[i][2] == 1) || (arr[i][1] == 1 && arr[i][2] == 1) || (arr[i][0] == 1 && arr[i][1] == 1 && arr[i][2] == 1)) ans++;
    }
    cout << ans << endl;
    return 0;
}
