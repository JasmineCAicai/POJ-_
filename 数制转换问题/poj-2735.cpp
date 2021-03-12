// 八进制到十进制
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n = 0, tmp = 0, i = 1, ans = 0;
	cin >> n;
	tmp = n;
	while (tmp / 10 != 0) {
		i++;
		tmp /= 10;
	}
	while(i > 0) {
		ans = ans + (int)(n / (pow(10,i - 1))) * (pow(8,i - 1));
		n = n % (int)(pow(10, i - 1));
		i--;
	}
	cout << ans << endl;
	return 0;
}
