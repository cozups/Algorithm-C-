#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, k;
	stack<pair<int, int>> S;
	cin >> n;

	S.push({ 100000001, 0 });
	for (int i = 1; i <= n; i++) {
		cin >> k;
		while (S.top().first < k) {
			S.pop();
		}
		cout << S.top().second << ' ';
		S.push({ k, i });
	}
	return 0;
}