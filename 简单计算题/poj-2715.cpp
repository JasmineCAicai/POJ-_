// 谁拿了最多奖学金
#include <iostream>
using namespace std;

int main() {
	int N, max = 0, index = 0, sum = 0;
	char name[150][30], stu[150][5], west[150][5];
	int finalAvg[150], classGrade[150], paper[150], scholarship[150] = { 0 };
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> name[i] >> finalAvg[i] >> classGrade[i] >> stu[i] >> west[i] >> paper[i];
		if (finalAvg[i] > 80 && paper[i] >= 1) scholarship[i] += 8000;
		if (finalAvg[i] > 85 && classGrade[i] > 80) scholarship[i] += 4000;
		if (finalAvg[i] > 90) scholarship[i] += 2000;
		if (finalAvg[i] > 85 && west[i][0] == 'Y') scholarship[i] += 1000;
		if (classGrade[i] > 80 && stu[i][0] == 'Y') scholarship[i] += 850;
	}

	for (int i = 0; i < N; i++) {
		sum += scholarship[i];
		if (max < scholarship[i]) {
			max = scholarship[i];
			index = i;
		}
	}

	cout << name[index] << endl;
	cout << max << endl;
	cout << sum << endl;

	return 0;
}
