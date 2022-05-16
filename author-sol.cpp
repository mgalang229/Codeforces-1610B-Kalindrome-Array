#include <bits/stdc++.h>

using namespace std;

void Verify(vector<int> a, int x, bool& checker) {
	vector<int> temp;
	for (int i = 0; i < (int) a.size(); i++) {
		if (a[i] != x) {
			temp.push_back(a[i]);
		}
	}
	int n = temp.size();
	for (int i = 0; i < n / 2; i++){ 
		if (temp[i] != temp[n - 1 - i]) {
			return;
		}
	}
	checker = true;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		bool checker = true;
		for (int i = 0; i < n / 2; i++) {
			if (a[i] != a[n - 1 - i]) {
				checker = false;
				Verify(a, a[i], checker);
				Verify(a, a[n - 1 - i], checker);
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
