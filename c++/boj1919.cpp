#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s1, s2;
	int ans = 0;
	int a[26] = {}, b[26] = {};
	
	cin >> s1 >> s2;

	for (auto c : s1) a[c - 'a']++;
	for (auto c : s2) b[c - 'a']++;

	for (int i = 0; i < 26; i++) {
		if (a[i] > b[i]) {
			a[i] -= b[i];
			b[i] = 0;
		}
		else {
			b[i] -= a[i];
			a[i] = 0;
		}
	}

	for (int i : a) ans += i;
	for (int i : b) ans += i;

	cout << ans;

	return 0;
}