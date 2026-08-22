#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        vector<long long> a;

        for(int i = 0; i < 5; i++)
        {
            long long n;
            cin >> n;
            a.push_back(n);
        }

        long long mx = a[0];
        long long total = 0;

        for(int i = 0; i < 5; i++)
        {
            total += a[i];

            if(a[i] > mx)
            {
                mx = a[i];
            }
        }

        long long ans = (2 * mx )- total;

        cout << ans << endl;
    }

    return 0;
}