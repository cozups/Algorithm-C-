#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	stack<int> S;
	cin >> n;

	while (n--) {
		string cmd;

		cin >> cmd;

		if (cmd == "push") {
			int v;
			cin >> v;

			S.push(v);
		}
		else if (cmd == "top") {
			if (!S.empty()) cout << S.top() << '\n';
			else cout << -1 << '\n';
		}
		else if (cmd == "pop") {
			if (!S.empty()) {
				cout << S.top() << '\n';
				S.pop();
			}
			else cout << -1 << '\n';
		}
		else if (cmd == "size") {
			cout << S.size() << '\n';
		} 
		else if (cmd == "empty") {
			if (S.empty()) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
	}

	return 0;
}