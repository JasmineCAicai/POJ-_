// 细菌繁殖
#include <iostream>
using namespace std;

int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main() {
	int n = 0, sm = 1, sd = 1, sum = 0, em = 1, ed = 1, t = 0, i;
	cin >> n;
	while (n > 0) {
		cin >> sm >> sd >> sum >> em >> ed;
		if (sm == em) t = ed - sd;
		else {
			for (i = sm; i <= em; i++) 
				t += month[i-1];
			t -= (sd + (month[em-1] - ed));
		}
		for (i = 0; i < t; i++) {
			sum = sum * 2;
		}
		cout << sum << endl;
		t = 0;
		n--;
	}
	return 0;
}
