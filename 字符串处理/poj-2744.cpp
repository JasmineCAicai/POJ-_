// 子串
// 此为POJ版本
// POJ 版本不需要考虑strcpy和strncpy的unsafe问题，但不支持strrev，需自己实现
// VS 版本需要考虑strcpy和strncpy的unsafe问题，且可以用strrev
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int t, n;
char str[100][101];

void srev(char* a)
{
	char s[101];
	int i, l;
	l = strlen(a);
	for (i = 0; i < l; i++)
		s[i] = a[l - i - 1];
	s[l] = '\0';
	strcpy(a, s);
}

int searchMaxSubString(char* source) {
	int subStrLen = strlen(source), sourceStrLen = strlen(source);
	int i, j;
	bool foundMaxSubStr;
	char subStr[101], revSubStr[101];

	while (subStrLen > 0) {
		for (i = 0; i <= sourceStrLen - subStrLen; i++) {
			strncpy(subStr, source + i, subStrLen);
			strncpy(revSubStr, source + i, subStrLen);
			subStr[subStrLen] = revSubStr[subStrLen] = '\0';
			srev(revSubStr);
			foundMaxSubStr = true;
			for (j = 0; j < n; j++) {
				if (strstr(str[j], subStr) == NULL && strstr(str[j], revSubStr) == NULL) {
					foundMaxSubStr = false;
					break;
				}
			}
			if (foundMaxSubStr) return (subStrLen);
		}
		subStrLen--;
	}
	return (0);
}

int main() {
	int i, minStrLen, subStrLen;
	char minStr[101];

	cin >> t;
	while (t--) {
		cin >> n;
		minStrLen = 100;
		for (i = 0; i < n; i++) {
			cin >> str[i];
			if (strlen(str[i]) < minStrLen) {
				strcpy(minStr, str[i]);
				minStrLen = strlen(minStr);
			}
		}
		subStrLen = searchMaxSubString(minStr);
		cout << subStrLen << endl;
	}
	return 0;
}
