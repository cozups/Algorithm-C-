#include <iostream>

using namespace std;

int arr[1000001];
bool exist[2000001];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int len, x, ans = 0;

	cin >> len;

	for (int i = 0; i < len; i++) {
		cin >> arr[i];
	}

	cin >> x;

	for (int i = 0; i < len; i++) {
		if (x - arr[i] > 0 && exist[x - arr[i]]) {
			ans++;
		}
		exist[arr[i]] = true;
	}

	cout << ans;

	return 0;
}