// 日历问题
#include <iostream>
#include <cstdio>
using namespace std;

char week[7][10] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };
int year[2] = { 365, 366 };
int month[2][12] = {
	{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
	{31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int type(int m) {
	if (m % 4 != 0 || (m % 100 == 0 && m % 400 != 0)) return 0;
	else return 1;
}

int main() {
	int days, weekday;
	int i = 0, j = 0;
	while ((cin >> days) && days != -1) {
		weekday = days % 7;
		for (i = 2000; days >= year[type(i)]; i++)
			days -= year[type(i)];
		for (j = 0; days >= month[type(i)][j]; j++)
			days -= month[type(i)][j];
		cout << i;
		if ((j + 1) < 10) cout << "-0" << j + 1;
		else cout << "-" << j + 1;
		if ((days + 1) < 10) cout << "-0" << days + 1 << " " << week[weekday] << endl;
		else cout << "-" << days + 1 << " " << week[weekday] << endl;
	}
	return 0;
}
