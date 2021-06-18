// 数字三角形
#include <iostream>
#define MAX_SUM 100

using namespace std;

int D[MAX_SUM+10][MAX_SUM+10];
int aMaxSum[MAX_SUM+10][MAX_SUM+10];
int N;

int main() {
    int i, j;
    cin >> N;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= i; j++) {
            cin >> D[i][j];
        }
    }

    for (j = 1; j <= N; j++) {
        aMaxSum[N][j] = D[N][j];
    }

    for (i = N; i > 1; i--) {
        for (j = 1; j < i; j++) {
            if (aMaxSum[i][j] > aMaxSum[i][j+1]) {
                aMaxSum[i-1][j] = aMaxSum[i][j] + D[i-1][j];
            }
            else {
                aMaxSum[i-1][j] = aMaxSum[i][j+1] + D[i-1][j];
            }
        }
    }

    cout << aMaxSum[1][1] << endl;

    return 0;
}
