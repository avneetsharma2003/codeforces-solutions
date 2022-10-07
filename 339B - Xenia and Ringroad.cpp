#include <bits/stdc++.h>
using namespace std;

# define ll long long

int main() {
    int n, m;
	cin >> n >> m;
	int prev = 1;
	int curr;
	ll time = 0;
	for (int i = 0; i < m; i++) {
		cin >> curr;
		if (curr >= prev)
			time += curr - prev;
		else
			time += n - prev + curr;
		prev = curr;
	}
	cout << time << '\n';
    return 0;
}
