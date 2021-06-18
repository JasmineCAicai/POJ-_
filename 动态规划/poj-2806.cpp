// 公共子序列
#include <iostream>
#include <cstring>

#define MAX_LEN 1000

using namespace std;

char str1[MAX_LEN];
char str2[MAX_LEN];
int maxLen[MAX_LEN][MAX_LEN];

int main() {
    while (cin >> str1+1 >> str2+1) {
        int length1 = strlen(str1+1);
        int length2 = strlen(str2+1);

        for (int i = 0; i <= length1; ++i) {
            maxLen[i][0] = 0;
        }
        for (int i = 0; i <= length2; ++i) {
            maxLen[0][i] = 0;
        }
        for (int i = 1; i <= length1; ++i) {
            for (int j = 1; j <= length2; ++j) {
                if (str1[i]==str2[j]) {
                    maxLen[i][j] = maxLen[i-1][j-1]+1;
                } else {
                    int len1 = maxLen[i][j-1];
                    int len2 = maxLen[i-1][j];
                    if (len1 > len2) {
                        maxLen[i][j] = len1;
                    }
                    else {
                        maxLen[i][j] = len2;
                    }
                }
            }
        }
        cout << maxLen[length1][length2] << endl;
    }
    return 0;
}
