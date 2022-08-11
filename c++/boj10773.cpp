#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int k;
	stack<int> S;

	cin >> k;

	while (k--) {
		int a;
		cin >> a;

		if (a != 0) {
			S.push(a);
		}
		else {
			S.pop();
		}
	}

	int ans = 0;
	while (!S.empty()) {
		ans += S.top();
		S.pop();
	}

	cout << ans;

	return 0;
}