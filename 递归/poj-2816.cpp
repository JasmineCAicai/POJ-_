#include <iostream>

using namespace std;

int W, H;
char z[21][21];

int f(int x, int y) {
    if (x<0 || x>= W || y<0 || y>=H) return 0;
    if (z[x][y]=='#') return 0;
    else {
        z[x][y] = '#';
        return 1+ f(x-1,y) + f(x+1,y) + f(x,y-1) + f(x,y+1);
    }
}

int main() {
    int i, j, num;
    while ((cin >> H >> W) && W!=0 && H!=0) {
        num = 0;
        for (i=0; i<W; i++) {
            cin >> z[i];
        }
        for (i=0; i<W; i++) {
            for (j=0; j<H; j++) {
                if (z[i][j]=='@') cout << f(i,j) << endl;
            }
        }
    }
    return 0;
}
