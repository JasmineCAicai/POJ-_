// 分解因数
#include <iostream>

using namespace std;

int sum;

void  fun(int a,int n)
{
    int i;
    for(i=a; i<n; i++)
    {
        if(n%i==0 && i<=n/i)
        {
            sum++;
            fun(i,n/i);
        }
        if(i>n/i) break;
    }
}

int main()
{
    int n, a, i;
    cin >> n;
    for(i=0; i<n; i++)
    {
        cin >> a;
        sum = 1;
        fun(2,a);
        cout << sum << endl;
    }
    return 0;
}

