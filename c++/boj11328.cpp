#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;

	cin >> t;

	while (t--) {
		string s1, s2;
		int a[26] = {};

		cin >> s1 >> s2;

		for (auto c : s1) a[c - 'a']++;
		for (auto c : s2) a[c - 'a']--;

		bool isPossible = true;

		for (int i : a) {
			if (i) isPossible = false;
		}

		if (isPossible) cout << "Possible\n";
		else cout << "Impossible\n";
	}

	return 0;
}