// 字符串判等
#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char s1[101], s2[101], n1[101], n2[101];
	int i, j = -1, k = -1;
	cin.getline(s1, 100);
	cin.getline(s2, 100);

	for (i = 0; i < strlen(s1); i++) {
		if (s1[i] != ' ') {
			j++;
			n1[j] = s1[i];
		}
	}
	for (i = 0; i < strlen(s2); i++) {
		if (s2[i] != ' ') {
			k++;
			n2[k] = s2[i];
		}
	}
	
	if (s1 == "" && s2 == "") cout << "YES" << endl;
	else if (j == -1 && k == -1) cout << "YES" << endl;
	else if (j != k) cout << "NO" << endl;
	else {
		i = 0;
		while (i < j) {
			if (toupper(n1[i]) != toupper(n2[i])) {
				cout << "NO" << endl;
				break;
			}
			i++;
		}
	}
	if (i == j) cout << "YES" << endl;

	return 0;
}
