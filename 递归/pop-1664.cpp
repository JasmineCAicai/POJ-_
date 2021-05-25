// 放苹果

#include <iostream>

using namespace std;

int divide(int M, int N) {
    if(N==1 || M==0) return 1;
    if(M < N) return divide(M,M);
    return divide(M, N-1) + divide(M-N, N);
}

int main() {
    int t, M, N;
    cin >> t;

    for (int i = 0; i < t; i++){
        cin >> M >> N;
        cout << divide(M,N) << endl;
    }
    return 0;
}
