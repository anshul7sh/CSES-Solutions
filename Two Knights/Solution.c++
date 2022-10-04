#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long n;
    cin >> n;

    cout << 0 << endl;

    for (long i = 2; i <= n; i++)
        cout << i * i * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << endl;

    return 0;
}