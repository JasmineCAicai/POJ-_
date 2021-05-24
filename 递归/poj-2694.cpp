// 逆波兰表达式
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double exp() {
    char a[10];
    cin >> a;
    switch (a[0]) {
        case '+': return exp() + exp();
        case '-': return exp() - exp();
        case '*': return exp() * exp();
        case '/': return exp() / exp();
        default: return atof(a);
    }
}

int main() {
    cout << fixed << setprecision(6) << exp() << endl;
    return 0;
}
