// 八皇后问题

#include <iostream>

using namespace std;

int ans[92][8], n, b, i, j, num, hang[8];

void queen(int i) {
    int j, k;
    if(i == 8){
        for (j = 0; j < 8; j++) {
            ans[num][j] = hang[j] + 1;
        }
        num++;
        return;
    }
    for (j = 0; j < 8; j++) {
        for (k = 0; k < i; k++) {
            if(hang[k] == j || (k - i) == (hang[k] - j) || (i - k) == (hang[k] - j)) break;
        }
        if (k == i) {
            hang[i] = j;
            queen(i + 1);
        }
    }
}

int main() {
    num = 0;
    queen(0);
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> b;
        for (j = 0; j < 8; j++) {
            cout << ans[b-1][j];
        }
        cout << endl;
    }
    return 0;
}
