#include <iostream>

using namespace std;

int a[7][2];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k, s, y, ans = 0;

	cin >> n >> k;

	for (int i = 0; i < n; i++) {
		cin >> s >> y;

		a[y][s]++;
	}

	for (int i = 1; i < 7; i++) {
		for (int j = 0; j < 2; j++) {
			ans += (a[i][j] / k);
			if (a[i][j] % k) ans += 1;
		}
	}

	cout << ans;

	return 0;
}