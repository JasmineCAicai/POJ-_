// 简单密码
#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	char s[200];
	int i;
	cin.getline(s, 200);
	for (i = 0; s[i] != '\0'; i++) {
		if (isalpha(s[i])) {
			if (s[i] - 'A' >= 5) {
				s[i] = s[i] - 5;
			}
			else {
				s[i] = 'Z' - (5 - (s[i] - 'A')) + 1;
			}
		}
	}
	for (i = 0; s[i] != '\0'; i++) {
		cout << s[i];
	}
	cout << endl;
	return 0;
}
