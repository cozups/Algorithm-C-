#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	stack<int> S;
	vector<char> ans;

	int next = 1;
	while(t--) {
		int v;
		cin >> v;

		while (next <= v) {
			S.push(next++);
			ans.push_back('+');
		}

		if (S.top() == v) {
			ans.push_back('-');
			S.pop();
		} 
		else {
			cout << "NO" << '\n';
			return 0;
		}
	}

	
	for (auto e : ans) {
		cout << e << '\n';
	}

	
	return 0;
}