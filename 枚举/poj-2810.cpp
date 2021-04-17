// 完美立方
#include <iostream>

using namespace std;

int main() {
	int n, a, b, c, d, i;
	int num[101];
	cin >> n;
	for (i = 1; i <= n; i++)
		num[i] = i * i * i;
	for (a = 6; a <= n; a++) {
		for (b = 2; b < a; b++) {
			if (num[a] < num[b] + num[b + 1] + num[b + 2]) break;
			for (c = b + 1; c < a; c++) {
				if (num[a] < num[b] + num[c] + num[c + 1]) break;
				for (d = c + 1; d < a; d++) {
					if (num[a] == num[b] + num[c] + num[d]) {
						cout << "Cube = " << a << ", Triple = (" << b << "," << c << "," << d << ")" << endl;
					}
				}
			}
		}
	}
	return 0;
}
