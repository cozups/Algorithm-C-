#include <iostream>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	stack<int> S;
	long long h, ans = 0;

	cin >> n;

	while (n--) {
		cin >> h;

		while (!S.empty() && S.top() <= h) {
			S.pop();
		}
		ans += S.size();
		S.push(h);
	}

	cout << ans;
	return 0;
}