#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
    while (b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }

    return a;
}

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int l,r,k;
        cin>>l>>r>>k;
        int ans = 0;
        for (int i = l; i <=r; i++)
        {
            if (gcd(i,k)==1)
            {
                ans++;
            }
            
            
        }
        cout<<ans<<endl;
    }
    
    return 0;
}