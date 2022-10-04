#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;

    vector<int> count(26, 0);

    for (auto x : s)
        count[x - 'A']++;

    int odd = 0;

    for (auto x : count)
        if (x % 2 == 1)
            odd++;

    if (odd > 1)
    {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    int i;
    char c;

    for (i = 0, c = 'A'; i < 26; i++, c++)
        if (count[i] % 2 == 0)
            for (int j = 0; j < count[i] / 2; j++)
                cout << c;

    for (i = 0, c = 'A'; i < 26; i++, c++)
        if (count[i] % 2 == 1)
            for (int j = 0; j < count[i]; j++)
                cout << c;

    for (i = 25, c = 'Z'; i >= 0; i--, c--)
        if (count[i] % 2 == 0)
            for (int j = 0; j < count[i] / 2; j++)
                cout << c;

    return 0;
}