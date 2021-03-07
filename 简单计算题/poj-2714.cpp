// 平均年龄
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	int n, i;
	double sum;
	int* age;

	cin >> n;
	age = (int*)malloc(n * sizeof(int));

	for (i = 0; i < n; i++) {
		cin >> age[i];
		sum += age[i];
	}

	cout << fixed << setprecision(2) << sum / (double)n << endl;

	free(age);

	return 0;
}
