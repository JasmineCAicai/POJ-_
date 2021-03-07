// 肿瘤面积
#include <iostream>
using namespace std;

int main() {
	int n, i, j = 0, x = 0, y = 0, y_times, x_times=0;
	int a[1000];
	cin >> n;
	for (i = 0; i < n; i++) {
		y_times = 0;
		while (j < n) {
			cin >> a[j];
			if (a[j] == 0 && x_times == 0) {
				x++;
			}
			if (a[j] == 0 && y_times == 0) {
				y++;
				y_times = 1;
			}
			j++;
		}
		if (x > 0) x_times = 1;
		j = 0;
	}

	cout << (x - 2) * (y - 2) << endl;

	return 0;
}
