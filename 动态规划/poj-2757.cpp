// 最长上升子序列
#include <iostream>
#define NUM_MAX 1000

using namespace std;

int n[NUM_MAX+10];
int sum[NUM_MAX+10];

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= N; ++i) {
        cin >> n[i];
    }
    sum[1] = 1;

    for (int i = 2; i <= N; ++i) {
        int tmp = 0;
        for (int j = 1; j < i; ++j) {
            if (n[i]>n[j]) {
                if (tmp < sum[j]) {
                    tmp = sum[j];
                }
            }
        }
        sum[i] = tmp + 1;
    }

    int maxLength = -1;
    for (int i = 1; i <= N; ++i) {
        if (maxLength < sum[i]) {
            maxLength = sum[i];
        }
    }

    cout << maxLength << endl;

    return 0;
}
