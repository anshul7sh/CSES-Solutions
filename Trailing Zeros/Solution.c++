#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin >> n;

    long res = 0;

    for (int i = 5; i <= n; i *= 5)
        res += (n / i);

    cout << res << endl;

    return 0;
}