// 十进制到八进制
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int i, j, q, r = 0;
	int t[100] = { 0 };
	cin >> q;
	for (i = 0; q != 0; i++) {
		t[i] = q % 8;
		q = q / 8;
	}
	for (j = i - 1; j >= 0; j--) {
		cout << t[j];
	}
	cout << endl;

	return 0;
}
