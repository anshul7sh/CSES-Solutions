#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long t;
    cin >> t;

    while (t--)
    {
        long long x, y;
        cin >> x >> y;

        x--, y--;

        if (x < y)
        {
            if (y % 2 == 1)
                cout << (y) * (y) + x + 1 << endl;
            else
                cout << (y + 1) * (y + 1) - x << endl;
        }
        else
        {
            if (x % 2 == 1)
                cout << (x + 1) * (x + 1) - y << endl;
            else
                cout << (x) * (x) + y + 1 << endl;
        }
    }

    return 0;
}