#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n], b[n], capacity = 0, max_capacity = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        capacity += (b[i] - a[i]);
        if(capacity > max_capacity) max_capacity = capacity;
    }
    cout << max_capacity;
    return 0;
}
