// 填词
#include <iostream>
using namespace std;

int main() {
	int n, m, p;
	int characters[26] = { 0 };
	int i, j;
	char c;

	cin >> n >> m >> p;
	for (i = 0; i < n; i++) {
		char str[11];
		cin >> str;
		for (j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A']++;
	}

	for (i = 0; i < p; i++) {
		char str[101];
		cin >> str;
		for (j = 0; str[j] != '\0'; j++)
			characters[str[j] - 'A']--;
	}

	for (i = 0; i < 26; i++) {
		if (characters[i] != 0) {
			for (j = 0; j < characters[i]; j++) {
				c = 'A' + i;
				cout << c;
			}
		}
	}

	cout << endl;

	return 0;
}
