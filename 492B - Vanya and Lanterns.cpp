#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, l;
    cin >> n >> l;
    int a[n];
    for (int i = 0; i < n; i++) {
    	cin >> a[i];
    }
    sort(a, a + n);
    double r ,d;
    r = max((double) a[0], (double) (l - a[n - 1]));
    for (int i = 1; i < n; i++) {
    	d = (a[i] - a[i - 1]) / 2.0;
    	if (d > r)
    		r = d;
    }
    printf("%.10lf\n", r);
    return 0;
}
