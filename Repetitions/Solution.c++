#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    int res = 0, idx = 0, n = s.size();
    char c;

    while (idx < n)
    {
        c = s[idx];
        int count = 0;

        while (idx < n && s[idx] == c)
            count++, idx++;

        res = max(res, count);
    }

    cout << res << endl;

    return 0;
}