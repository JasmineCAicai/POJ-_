// 垂直直方图
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int i = 0, j, max = 0, tmp;
	int ans[26] = { 0 };
	
	while (i < 4) {
		char s[80];
		cin.getline(s, 80);
		for (j = 0; s[j] != '\0'; j++) {
			if (isupper(s[j])) ans[s[j] - 'A']++;
		}
		i++;
	}
	for (i = 0; i < 26; i++) {
		if (max < ans[i]) max = ans[i];
	}
	tmp = max;
	for (i = 0; i < max + 1; i++) {
		for (j = 0; j < 26; j++) {
			if (i == max) {
				cout << static_cast<char>('A' + j);
			}
			else if (ans[j] < tmp) cout << " ";
			else {
				cout << "*";
			}
			cout << " ";
		}
		cout << endl;
		tmp--;
	}

	return 0;
}
