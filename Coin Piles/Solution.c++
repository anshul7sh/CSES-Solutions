#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long t;
    cin >> t;

    while (t--)
    {
        int a, b;

        cin >> a >> b;

        if ((a + b) % 3 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        if (abs(a - b) > min(a, b))
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}