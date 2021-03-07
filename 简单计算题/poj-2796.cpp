// 数字求和
#include <iostream>
using namespace std;

int main() {
	int a, tmp, sum = 0, i;
	cin >> a;
	for (i = 0; i < 5; i++) {
		cin >> tmp;
		if (tmp < a) sum += tmp;
	}

	cout << sum << endl;

	return 0;
}
