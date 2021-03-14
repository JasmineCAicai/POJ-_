// 487-3279
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>

using namespace std;

char map[] = "22233344455566677778889999";
char str[80], telNumbers[100000][9];

int compare(const void* elem1, const void* elem2) {
	return (strcmp((char*)elem1, (char*)elem2));
}

void standardizeTel(int n) {
	int j, k;
	j = k = -1;
	while (k < 8) {
		j++;
		if (str[j] == '-')
			continue;
		k++;
		if (k == 3) {
			telNumbers[n][k] = '-';
			k++;
		}
		if (str[j] >= 'A' && str[j] <= 'Z') {
			telNumbers[n][k] = map[str[j] - 'A'];
			continue;
		}
		telNumbers[n][k] = str[j];
	}
	telNumbers[n][k] = '\0';
	return;
}

int main() {
	int n, i, j;
	bool noduplicate;

	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> str;
		standardizeTel(i);
	}

	qsort(telNumbers, n, 9, compare);

	noduplicate = true;
	i = 0;
	while (i < n) {
		j = i;
		i++;
		while (i < n && strcmp(telNumbers[i], telNumbers[j]) == 0) i++;
		if (i - j > 1) {
			cout << telNumbers[j] << " " << i - j << endl;
			noduplicate = false;
		}
	}
	if (noduplicate)
		cout << "No duplicates." << endl;

	return 0;
}
