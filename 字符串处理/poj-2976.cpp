// All in All
#include <iostream>
#include <cstring>
#include <cstdio>

using namespace std;

int main() {
	char s1[100001], s2[100001];
	int i, j, len1, len2;
	while (cin >> s1 >> s2) {
		len1 = strlen(s1);
		len2 = strlen(s2);

		for (i = 0, j = 0; i < len1 && j < len2;) {
			if (s1[i] == s2[j]) {
				i++;
				j++;
			}
			else {
				j++;
			}
		}
		if (i == len1) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	
	return 0;
}
