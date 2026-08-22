#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<long long int>a(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }
    //prefix sum ----------
    vector<long long int>pre(n+1);
    pre[1]=a[1];
    for (int i = 2; i <=n ; i++)
    {
        pre[i]=pre[i-1]+a[i];
    }
    
    //prefix sum end----------------

    while (q--)
    {
        int l,r;
        cin>>l>>r;
        long long int count;
        if (l==1)
        {
            count=pre[r];
        }
        else
        {
            count=pre[r]-pre[l-1];
        }
        cout<<count<<"\n";
        
    }
    
    
    return 0;
}