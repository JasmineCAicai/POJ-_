// 二叉树
#include <iostream>

using namespace std;

int f(int x, int y) {
    if (x==y) return x;
    if (x>y) return f(x/2,y);
    if (x<y) return f(x, y/2);
}

int main() {
    int x, y;
    cin >> x >> y;
    cout << f(x,y) << endl;
    return 0;
}
