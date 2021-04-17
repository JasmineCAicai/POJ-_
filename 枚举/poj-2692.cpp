// 假币问题
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

char l[3][7], r[3][7], result[3][5];

bool isHeavy(char a) {
	for (int i = 0; i < 3; i++) {
		switch (result[i][0]) {
		case 'u':
			if (strchr(l[i], a) == NULL) return false;
			break;
		case 'e':
			if (strchr(l[i], a) != NULL || strchr(r[i], a) != NULL) return false;
			break;
		case 'd':
			if (strchr(r[i], a) == NULL) return false;
			break;
		}
	}
	return true;
}

bool isLight(char a) {
	for (int i = 0; i < 3; i++) {
		switch (result[i][0]) {
		case 'u':
			if (strchr(r[i], a) == NULL) return false;
			break;
		case 'e':
			if (strchr(l[i], a) != NULL || strchr(r[i], a) != NULL) return false;
			break;
		case 'd':
			if (strchr(l[i], a) == NULL) return false;
			break;
		}
	}
	return true;
}

int main() {
	int n, i;
	cin >> n;

	while (n > 0) {
		for (i = 0; i < 3; i++) {
			cin >> l[i] >> r[i] >> result[i];
		}
		for (i = 'A'; i <= 'L'; i++) {
			if (isHeavy(i)) {
				cout << (char)i << " is the counterfeit coin and it is heavy." << endl;
				break;
			}
			if (isLight(i)) {
				cout << (char)i << " is the counterfeit coin and it is light." << endl;
				break;
			}
		}
		n--;
	}
	return 0;
}
