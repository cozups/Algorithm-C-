#include <iostream>
#include <list>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	string s;
	list<char> l;
	cin >> s;

	for (auto e : s) l.push_back(e);
	auto p = l.end();

	cin >> t;

	while (t--) {
		char a, b;

		cin >> a;

		if (a == 'P') {
			cin >> b;
			l.insert(p, b);
		}
		else if (a == 'L' && p != l.begin()) {
			p--;
		}
		else if (a == 'D' && p != l.end()) {
			p++;
		}
		else if (a == 'B' && p != l.begin()) {
			p--;
			p = l.erase(p);
		}
	}

	for (auto c : l) cout << c;

	return 0;
}