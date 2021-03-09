// 肿瘤检测
#include <iostream>
using namespace std;

int main() {
	int map[110][110];
	int n, i, j, s = 0, l = 0;
	cin >> n;
	for (i = 0; i < n + 2; i++) {
		for (j = 0; j < n + 2; j++) {
			map[i][j] = 1;
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			cin >> map[i][j];
		}
	}
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n; j++) {
			if (map[i][j] <= 50) {
				s++;
				if (map[i][j - 1] > 50 || map[i][j + 1] > 50 || map[i - 1][j] > 50 || map[i + 1][j] > 50 || i == 1 || i == n || j == 1 || j == n) {
					l++;
				}
			}
		}
	}
	cout << s << " " << l << endl;
	return 0;
}
