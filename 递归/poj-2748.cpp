// 全排列
#include <iostream>
#include <cstring>

using namespace std;

char in[10], result[10];
int l;
int used[6] = { 0 };

void permutation(int a) {
	if (a == l) {
		result[l] = 0;
		cout << result << endl;
		return;
	}
	for (int i = 0; i < l; i++) {
		if (used[i] == 0) {
			result[a] = in[i];
			used[i] = 1;
			permutation(a + 1);
			used[i] = 0;
		}
	}
}

int main() {
	cin >> in;
	l = strlen(in);
	permutation(0);
	return 0;
}
