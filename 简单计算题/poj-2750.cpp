// POJ-2750-鸡兔同笼

#include <iostream>
using namespace std;

int main()
{
    int a, i;

    cin >> a;
    if (a % 2 != 0)
        cout << "0 0" << endl;
    else if (a % 4 != 0)
        cout << a / 4 + 1 << " " << a / 2 << endl;
    else
        cout << a / 4 << " " << a / 2 << endl;
}
