// 数根
#include <iostream>

using namespace std;

int main() {
	char num[1002];
	int n;
	while (cin >> num && num[0]!='0') {
		n = 0;
		for (int i = 0; num[i] != '\0'; i++) {
			n += num[i] - '0';
		}
		cout << (n - 1) % 9 + 1 << endl;
	}
	return 0;
}
