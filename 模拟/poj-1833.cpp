// 排列
#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int MyCompare(const void* e1, const void* e2) {
	return *((int*)e1) - *((int*)e2);
}

int main() {
	int an[1034];
	int M, n, k, i, j;
	cin >> M;
	for (int m = 0; m < M; m++) {
		cin >> n >> k;
		for (i = 1; i <= n; i++)
			cin >> an[i];
		an[0] = 9999;
		for (i = 0; i < k; i++) {
			for (j = n; j >= 1 && an[j - 1] > an[j]; j--);
			if (j >= 1) {
				int nMinLarger = an[j];
				int nMinIdx = j;
				for (int kk = j; kk <= n; kk++) {
					if (nMinLarger > an[kk] && an[kk] > an[j - 1]) {
						nMinLarger = an[kk];
						nMinIdx = kk;
					}
				}
				an[nMinIdx] = an[j - 1];
				an[j - 1] = nMinLarger;
				qsort(an + j, n - j + 1, sizeof(int), MyCompare);
			}
			else {
				for (j = 1; j <= n; j++) {
					an[j] = j;
				}
			}
		}
		for (j = 1; j <= n; j++) {
			cout << an[j] << " ";
		}
		cout << endl;
	}
	return 0;
}
