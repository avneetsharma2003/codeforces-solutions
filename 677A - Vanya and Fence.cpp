#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n, width = 0;
    float h;
    cin >> n >> h;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
        width += ceil(arr[i] / h);
    }
    cout << width;
    return 0;
}
