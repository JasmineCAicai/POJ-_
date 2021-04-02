// 显示器
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

char n1[11] = { "- -- -----" };
char n2[11] = { "|   ||| ||" };
char n3[11] = { "|||||  |||" };
char n4[11] = { "  ----- --" };
char n5[11] = { "| |   | | " };
char n6[11] = { "|| |||||||" };
char n7[11] = { "- -- -- --" };

int main() {
	int s;
	char num[20];
	int nDigit, nLength, i, j, k;
	while (1) {
		cin >> s >> num;
		if (s == 0) break;
		nLength = strlen(num);
		for (i = 0; i < nLength; i++) {
			nDigit = num[i] - '0';
			cout << " ";
			for (j = 0; j < s; j++)
				cout << n1[nDigit];
			cout << " ";
			cout << " ";
		}
		cout << endl;
		for (i = 0; i < s; i++) {
			for (j = 0; j < nLength; j++) {
				nDigit = num[j] - '0';
				cout << n2[nDigit];
				for (k = 0; k < s; k++)
					cout << " ";
				cout << n3[nDigit];
				cout << " ";
			}
			cout << endl;
		}
		for (i = 0; i < nLength; i++) {
			cout << " ";
			nDigit = num[i] - '0';
			for (j = 0; j < s; j++)
				cout << n4[nDigit];
			cout << " ";
			cout << " ";
		}
		cout << endl;
		for (i = 0; i < s; i++) {
			for (j = 0; j < nLength; j++) {
				nDigit = num[j] - '0';
				cout << n5[nDigit];
				for (k = 0; k < s; k++)
					cout << " ";
				cout << n6[nDigit];
				cout << " ";
			}
			cout << endl;
		}
		for (i = 0; i < nLength; i++) {
			cout << " ";
			nDigit = num[i] - '0';
			for (j = 0; j < s; j++)
				cout << n7[nDigit];
			cout << " ";
			cout << " ";
		}
		cout << endl;
		cout << endl;
	}
	return 0;
}
