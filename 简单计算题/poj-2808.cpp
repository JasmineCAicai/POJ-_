// 校门外的树
#include <iostream>
using namespace std;

int main() {
	int L, M, i, sum = 0, begin, end;
	int* c;
	cin >> L >> M;
	c = (int*)malloc((L + 1) * sizeof(int));
	for (i = 0; i <= L; i++)
		c[i] = 1;

	for (i = 0; i < M; i++) {
		cin >> begin >> end;
		for (; begin < end; begin++)
			c[begin] = 0;
		c[end] = 0;
	}

	for (i = 0; i <= L; i++) {
		if (c[i] == 1)
			sum++;
	}

	cout << sum << endl;
	free(c);
	return 0;
}
