#include <iostream>
#include <vector>
using namespace std;

int n, k, len;
vector<int> v = {};

// 야매 연결리스트
int pre[5001];
int nxt[5001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> n >> k;

	for (int i = 1; i <= n; i++) {
		pre[i] = (i == 1) ? n : i - 1;
		nxt[i] = (i == n) ? 1 : i + 1;
		len++;
	}

	int i = 1;

	for (int cur = 1; len != 0; cur = nxt[cur]) {
		// k번째 일 때 제거
		if (i == k) {
			v.push_back(cur);
			pre[nxt[cur]] = pre[cur];
			nxt[pre[cur]] = nxt[cur];
			len--;
			i = 1;
		}
		else i++;
	}

	cout << '<';
	for (size_t i = 0; i < v.size(); i++) {
		if (i == v.size() - 1) cout << v[i];
		else cout << v[i] << ", ";
	}

	cout << '>';

	return 0;
}