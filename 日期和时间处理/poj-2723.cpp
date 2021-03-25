// 不吉利日期
#include <iostream>

using namespace std;

int main() {
	int month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int w = 0, i, j;
	cin >> w;
	for (i = 0; i < 12; i++) {
		for (j = 1; j <= month[i]; j++) {
			if (j == 13 && w % 7 == 5) cout << i + 1 << endl;
			w++;
		}
	}
	return 0;
}
