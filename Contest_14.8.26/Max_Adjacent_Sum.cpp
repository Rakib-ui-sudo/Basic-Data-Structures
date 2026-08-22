#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long maxOdd = 0;
    long long maxEven = 0;

    for (int i = 1; i <= n; i++)
    {
        long long x;
        cin >> x;

        if (i % 2 == 1)
        {
            maxOdd = max(maxOdd, x);
        }
        else
        {
            maxEven = max(maxEven, x);
        }
    }

    cout << maxOdd + maxEven << endl;

    return 0;
}