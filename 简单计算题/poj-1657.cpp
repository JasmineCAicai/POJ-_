// 棋盘上的距离
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int nCases, i;
	cin >> nCases;
	for (i = 0; i < nCases; i++) {
		char begin[5], end[5];
		cin >> begin >> end;
		int x, y;
		x = abs(begin[0] - end[0]);
		y = abs(begin[1] - end[1]);
		if (x == 0 && y == 0) cout << "0 0 0 0" << endl;
		else {
			if (x < y) cout << y << " ";
			else cout << x << " ";

			if (x == y || x == 0 || y == 0) cout << "1" << " ";
			else cout << "2" << " ";

			if (x == 0 || y == 0) cout << "1" << " ";
			else cout << "2" << " ";

			if (abs(x - y) % 2 != 0) cout << "Inf" << endl;
			else if (x == y) cout << "1" << endl;
			else cout << "2" << endl;
		}
	}
}
