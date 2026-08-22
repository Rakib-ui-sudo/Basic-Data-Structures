#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
    cin>>n>>q;
    vector<int>a(n+1);
    for (int i = 1; i <=n; i++)
    {
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    while (q--)
    {
        int x;
        cin>>x;
        int flag=0;
        //binary scarch.---
        int l=1;
        int r=n;
        while (l<=r)
        {
            int mid = (l+r)/2;
            if (a[mid]==x)
            {
                flag=1;
                break;
            }
            else if (a[mid]>x)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }     
            
        }
       //-------------------------- 

        if (flag==1)
        {
             cout<<"found"<<"\n";
        }
        else cout<<"not found"<<"\n";
        
    }
    
    
    return 0;
}