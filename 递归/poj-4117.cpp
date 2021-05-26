// 简单的整数划分问题

#include <iostream>

using namespace std;

int divide(int m, int i) {
    if(m==0) return 1;
    if(i==0) return 0;
    if(i<=m) return divide(m-i, i) + divide(m,i-1);
    else return divide(m, i-1);
}
int main() {
    int num;
    while(cin >> num){
        cout << divide(num,num) << endl;
    }
    return 0;
}
