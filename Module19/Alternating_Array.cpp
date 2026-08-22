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
        int v[n+1];
        for (int i = 1; i <=n; i++)
        {
            cin>>v[i];
        }
        
        int val=0;
        for (int i = 1; i <=n; i++)
        {
           if (i%2==0 && v[i]%2==0)val++;
           if(i%2==1 && v[i]%2==1)val++;  
        }

         int val2=0;
        for (int i = 1; i <=n; i++)
        {
           if (i%2==0 && v[i]%2==1)val2++;
           if(i%2==1 && v[i]%2==0)val2++;  
        }
        
        int ans = min(val,val2);
        cout<<ans<<endl;
    }
    
    return 0;
}