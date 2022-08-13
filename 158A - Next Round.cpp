#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), greater<int>());
    if(arr[k - 1] == 0) {
        while(k > 0 && arr[k - 1] == 0) {
            k--;
        }
    }
    else if(arr[k] == arr[k - 1]) {
        while(k < n && arr[k] == arr[k - 1]) {
            k++;
        }
    }
    cout << k;
    return 0;
}
