// 统计字符数
#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	int n, sum[26], i, max;
	char str[1001];

	cin >> n;
	while (n > 0) {
		cin >> str;
		for (i = 0; i < 26; i++)
			sum[i] = 0;
		for (i = 0; i < strlen(str); i++)
			sum[str[i] - 'a']++;
		max = 0;
		for (i = 1; i < 26; i++)
			if (sum[i] > sum[max]) max = i;
		cout << static_cast<char>(max + 'a') << " " << sum[max] << endl;
		n--;
	}
	return 0;
}
