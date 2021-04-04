// 宇航员
#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int now[7];
int x, y, z;

void move(char d[], int s) {
	int temp[7];
	if (d[0] == 'l') {
		temp[1] = now[5];
		temp[2] = now[6];
		temp[3] = now[3];
		temp[4] = now[4];
		temp[5] = now[2];
		temp[6] = now[1];
	}
	else if (d[0] == 'r') {
		temp[1] = now[6];
		temp[2] = now[5];
		temp[3] = now[3];
		temp[4] = now[4];
		temp[5] = now[1];
		temp[6] = now[2];
	}
	else if (d[0] == 'u') {
		temp[1] = now[3];
		temp[2] = now[4];
		temp[3] = now[2];
		temp[4] = now[1];
		temp[5] = now[5];
		temp[6] = now[6];
	}
	else if (d[0] == 'd') {
		temp[1] = now[4];
		temp[2] = now[3];
		temp[3] = now[1];
		temp[4] = now[2];
		temp[5] = now[5];
		temp[6] = now[6];
	}
	else if (d[0] == 'f') {
		temp[1] = now[1];
		temp[2] = now[2];
		temp[3] = now[3];
		temp[4] = now[4];
		temp[5] = now[5];
		temp[6] = now[6];
	}
	else if (d[0] == 'b') {
		temp[1] = now[2];
		temp[2] = now[1];
		temp[3] = now[3];
		temp[4] = now[4];
		temp[5] = now[6];
		temp[6] = now[5];
	}

	for (int i = 1; i <= 6; i++) {
		now[i] = temp[i];
	}
	int direction = now[1];
	switch (direction) {
	case 0:
		x += s;
		break;
	case 1:
		y += s;
		break;
	case 2:
		z += s;
		break;
	case 3:
		x -= s;
		break;
	case 4:
		y -= s;
		break;
	case 5:
		z -= s;
		break;
	default:
		break;
	}
}

int main() {
	int m, n, step, i, j;
	char direction[11];
	cin >> m;
	for (i = 0; i < m; i++) {
		x = y = z = 0;
		now[1] = 0; now[2] = 3; now[3] = 2;
		now[4] = 5; now[5] = 4; now[6] = 1;
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> direction >> step;
			move(direction, step);
		}
		cout << x << " " << y << " " << z << " " << now[1] << endl;
	}
	return 0;
}
