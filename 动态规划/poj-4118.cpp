// 开餐馆
#include <iostream>

using namespace std;

int main() {
    int T, n, k;
    int m[100] = {0}, p[100] = {0}, sum[100] = {0};
    cin >> T;
    for (int i = 0; i < T; ++i) {
        cin >> n >> k;
        for (int j = 0; j < n; ++j) {
            cin >> m[j];
        }
        for (int j = 0; j < n; ++j) {
            cin >> p[j];
        }
        for (int j = 0; j < n; ++j) {
            sum[j] = p[j];
            for (int l = 0; l < j; ++l) {
                if (m[j]-m[l] > k) {
                    sum[j] = max(sum[j],sum[l]+p[j]);
                }
            }
        }
        int ans = 0;
        for (int j = 0; j < n; ++j) {
            if (ans < sum[j]) ans = sum[j];
        }
        cout << ans << endl;
    }
    return 0;
}
