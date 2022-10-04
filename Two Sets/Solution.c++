#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    int numOdd = n / 2;
    if (n % 2 == 1)
        numOdd++;

    if (numOdd % 2 == 1)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;

        for (int i = 0; i < n / 4; i++)
            cout << i + 1 << " " << n - i << " ";

        cout << n / 2 << endl;
        for (int i = 0; i < n / 4; i++)
            cout << n / 2 + i + 1 << " " << n - n / 2 - i << " ";

        cout << endl;
    }
    else
    {
        int k = n - 3;

        cout << 2 + k / 2 << endl;

        cout << 1 << " " << 2 << " ";

        for (int i = 4, j = 0; j < k / 4; j++, i++)
            cout << i << " " << n - j << " ";
        cout << endl;

        cout << n - 2 - k / 2 << endl;
        cout << 3 << " ";

        for (int j = 0; j < k / 4; j++)
            cout << 4 + k / 4 + j << " " << n - k / 4 - j << " ";
        cout << endl;
    }

    return 0;
}