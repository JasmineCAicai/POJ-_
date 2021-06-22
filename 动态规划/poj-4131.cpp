// Charm Bracelet (神奇口袋)，很像背包问题
#include <iostream>

using namespace std;

struct Item {
    int w, d;
};

int main() {
    Item items[3500];
    int f[13000];
    int N, M;

    cin >> N >> M;

    for (int i = 1; i <= N; ++i) {
        cin >> items[i].w >> items[i].d;
    }
    for (int j = 0; j <= M; ++j) {
        if (items[1].w<=j) {
            f[j] = items[1].d;
        } else {
            f[j] = 0;
        }
    }
    // 能选两个物品时、能选三个物品时、四个物品、五个物品...
    for (int i = 2; i <= N; ++i) {
        for (int j = M; j >= 0; --j) {
            if (items[i].w <= j) {
                f[j] = max(f[j], f[j-items[i].w] + items[i].d);
            }
        }
    }
    cout << f[M] << endl;

    return 0;
}
