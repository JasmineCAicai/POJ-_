// 摘花生
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>

using namespace std;

int main() {
	int T, M, N, K;
	int aField[55][55];
	cin >> T;
	for (int t = 0; t < T; t++) {
		cin >> M >> N >> K;
		for (int m = 1; m <= M; m++) {
			for (int n = 1; n <= N; n++) {
				cin >> aField[m][n];
			}
		}
		int nTotalPeanuts = 0;
		int nTotalTime = 0;
		int nCuri = 0, nCurj;

		while (nTotalTime < K) {
			int nMax = 0, nMaxi, nMaxj;
			for (int i = 1; i <= M; i++) {
				for (int j = 1; j <= N; j++) {
					if (nMax < aField[i][j]) {
						nMax = aField[i][j];
						nMaxi = i;
						nMaxj = j;
					}
				}
			}
			if (nMax == 0) break;
			if (nCuri == 0) nCurj = nMaxj;

			if (nTotalTime + nMaxi + 1 + abs(nMaxi - nCuri) + abs(nMaxj - nCurj) <= K) {
				nTotalTime += 1 + abs(nMaxi - nCuri) + abs(nMaxj - nCurj);
				nCuri = nMaxi;
				nCurj = nMaxj;
				nTotalPeanuts += aField[nMaxi][nMaxj];
				aField[nMaxi][nMaxj] = 0;
			}
			else break;
		}
		cout << nTotalPeanuts << endl;
	}
	return 0;
}
