// 生理周期
#include <iostream>
using namespace std;

int main() {
	int p, e, i, d, j;
	cin >> p >> e >> i >> d;

	for (j = d + 1; j < 21252; j++) {
		if ((j - p) % 23 == 0) break;
	}
	for (; j < 21252; j = j + 23) {
		if ((j - e) % 28 == 0) break;
	}
	for (; j < 21252; j = j + 23 * 28) {
		if ((j - i) % 33 == 0) break;
	}

	cout << j - d << endl;
	return 0;
}
