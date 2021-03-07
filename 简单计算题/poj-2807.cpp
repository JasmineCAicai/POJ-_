// 两倍
#include <iostream>
using namespace std;

int main() {
	int n[15] = { 0 };
	int i = 0, j, sum = 0, tmp = 1;
	while (i<15) {
		cin >> tmp;
		if (tmp == 0) break;
		else {
			n[i] = tmp;
			i++;
		}
	}

	for (i = 0; n[i]!=0; i++) {
		for (j = 0; n[j]!=0; j++) {
			if ((n[i] * 2) == n[j] && i != j) sum++;
		}
	}

	cout << sum << endl;

	return 0;
}
