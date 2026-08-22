#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i];
    }

    for (int i = 0; i <n; i++)
    {
        if (a[i]==0)
        {
            a[i]=0;
        }
        
        if (a[i]>0)
        {
            a[i]=1;
        }
        else
        {
            a[i]=abs(a[i]);
        }
        
    }

    for (int x:a)
    {
        cout<<x<<" ";
    }
    
    
    return 0;
}