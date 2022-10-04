#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin >> n;

    long res = 1, mod = 1e9 + 7;

    for (int i = 1; i <= n; i++)
    {
        res *= 2;
        res %= mod;
    }

    cout << res << endl;

    return 0;
}