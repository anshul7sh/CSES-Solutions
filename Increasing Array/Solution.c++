#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    long long n;
    cin >> n;

    long long prev;
    cin >> prev;

    long long curr, res = 0;

    for (long long i = 1; i < n; i++)
    {
        cin >> curr;

        if (curr >= prev)
        {
            prev = curr;
            continue;
        }

        res += (prev - curr);
    }

    cout << res << endl;

    return 0;
}