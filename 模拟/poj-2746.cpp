// 约瑟夫问题
#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	int monkeys[310] = { 0 };
	int n, m, i;
	while (1) {
		cin >> n >> m;
		if (n == 0) break;
		for (i = 0; i < n; i++)
			monkeys[i] = i+1;
		int nPtr = 0;
		for (i = 0; i < n; i++) {
			int nCounted = 0;
			while (nCounted < m) {
				while (monkeys[nPtr] == 0)
					nPtr = (nPtr + 1) % n;
				nCounted++;
				nPtr = (nPtr + 1) % n;
			}
			nPtr--;
			if (nPtr < 0) nPtr = n - 1;
			if (i == n - 1) cout << monkeys[nPtr] << endl;
			monkeys[nPtr] = 0;
		}
	}
	return 0;
}
