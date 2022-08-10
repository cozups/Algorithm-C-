#include <iostream>
#include <algorithm>

using namespace std;

int freq[10];
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	string s;

	cin >> s;

	for (char c : s) {
		if (c - '0' == 6 && freq[6] > freq[9]) {
			freq[9]++;
		}
		else if (c - '0' == 9 && freq[9] > freq[6]) {
			freq[6]++;
		} else freq[c - '0']++;
	}


	cout << *max_element(freq, freq + 10);

	return 0;
}