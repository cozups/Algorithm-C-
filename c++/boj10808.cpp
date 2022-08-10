#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string S;
	vector<int> v(26);

	cin >> S;

	for (char e : S) {
		v[e - 'a']++;
	}

	for (int e : v) {
		cout << e << ' ';
	}

	return 0;
}