#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int police = 0, count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) police += arr[i];
        else if (police > 0) police--;
        else count++;
    }
    cout << count << endl;
    return 0;
}
