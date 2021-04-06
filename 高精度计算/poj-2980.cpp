// 大整数乘法
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

unsigned int an1[210];
unsigned int an2[210];
unsigned int aResult[410];

char szLine1[210];
char szLine2[210];

int main() {
	cin.getline(szLine1, 300);
	cin.getline(szLine2, 300);

	int i, j;
	int nLen1 = strlen(szLine1);
	int nLen2 = strlen(szLine2);
	memset(an1, 0, sizeof(an1));
	memset(an2, 0, sizeof(an2));
	memset(aResult, 0, sizeof(aResult));

	j = 0;
	for (i = nLen1 - 1; i >= 0; i--)
		an1[j++] = szLine1[i] - '0';

	j = 0;
	for (i = nLen2 - 1; i >= 0; i--)
		an2[j++] = szLine2[i] - '0';

	for (i = 0; i < nLen2; i++) {
		for (j = 0; j < nLen1; j++)
			aResult[i + j] += an2[i] * an1[j];
	}

	for (i = 0; i < 400; i++) {
		if (aResult[i] >= 10) {
			aResult[i + 1] += aResult[i] / 10;
			aResult[i] %= 10;
		}
	}

	bool flag = false;
	for (i = 400; i >= 0; i--) {
		if (flag) cout << aResult[i];
		else if (aResult[i]) {
			cout << aResult[i];
			flag = true;
		}
	}
	if (!flag) cout << "0";
	cout << endl;

	return 0;
}
