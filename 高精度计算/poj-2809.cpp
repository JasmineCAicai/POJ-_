// 计算2的N次方
#include <iostream>

using namespace std;

int ans[50] = { 0, 1 };

int main() {
	int n, i, j, t;
	cin >> n;
	for (i = 1; i <= n; i++) {
		t = 0;
		for (j = 1; j <= 40; j++) {
			ans[j] = ans[j] * 2 + t;
			t = ans[j] / 10;
			ans[j] %= 10;
		}
	}

	j = 0;
	for (i = 40; i >= 1; i--) {
		if (ans[i] != 0) j = 1;
		if (j) cout << ans[i];
	}
	cout << endl;

	return 0;
}
