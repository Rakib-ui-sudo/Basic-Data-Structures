#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    string ans = s;

    for (int i = 0; i+k <=n; i++)
    {
        string tmp = s;

        sort(tmp.begin() + i, tmp.begin() + i + k);

        if (tmp < ans)
        {
            ans = tmp;
        }
    }

    cout << ans << endl;

    return 0;
}