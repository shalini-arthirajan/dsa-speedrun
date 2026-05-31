#include <bits/stdc++.h>
using namespace std;

int n = 0, m = 0, h = 0, t = 0;
multiset<int> tickets;

int main() {
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> h;
		tickets.insert(h);
	}
	for (int i = 0; i < m; ++i) {
		cin >> t;
		auto it = tickets.upper_bound(t);
		if (it == tickets.begin()) {
			cout << -1 << "\n";
		} else {
			cout << *(--it) << "\n";
			tickets.erase(it);
		}
	}
}