#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        vector<long long>a(n);
        long long total = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            total+=a[i];
        }

        long long left = 0;
        long long ans = INT_MAX;

        for (int i = 0; i <n-1; i++)
        {
            left+=a[i];
            
            long long right = total - left;

            long long diff = abs(left - right);

            ans = min(ans, diff);
            
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}