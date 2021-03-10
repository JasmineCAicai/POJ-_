// 确定进制
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

long transform(char* x, int b) {
	int ret = 0;
	int len = strlen(x);
	for (int i = 0; i < len; i++) {
		if (x[i] - '0' >= b) return -1;
		ret *= b;
		ret += x[i] - '0';
	}
	return (long)ret;
}

int main() {
	char p[8], q[8], r[8];
	long pTransform = -1, qTransform = -1, rTransform = -1;
	int b;
	cin >> p >> q >> r;
	for (b = 2; b <= 16; b++) {
		pTransform = transform(p, b);
		qTransform = transform(q, b);
		rTransform = transform(r, b);
		if (pTransform == -1 || qTransform == -1 || rTransform == -1) continue;
		if (pTransform * qTransform == rTransform) {
			cout << b << endl;
			break;
		}
	}
	if (b == 17) cout << "0" << endl;
	return 0;
}
