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
       long long a[n];
       for (int i = 0; i < n; i++)
       {
          cin>>a[i];
       }
       
       long long preMax[n];
       preMax[0]=a[0];
       for (int i = 1; i < n; i++)
       {
          preMax[i]= max(preMax[i-1],a[i]);
       }
       
       long long ans=0;
       for (int i = 0; i < n; i++)
       {
           int wait = preMax[i]-a[i];
           ans += wait;
       }
       cout<<ans<<endl;

    }
    
    return 0;
}