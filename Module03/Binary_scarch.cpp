#include<bits/stdc++.h>
using namespace std;

bool cmp(int l,int r)
{
    return l<r;
}
int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    sort(a.begin(),a.end(),cmp);

    int val;
    cin>>val;
    int flag = 0;
    int l=0;
    int r=n-1;

    while (l<=r)
    {
        int mid=(l+r)/2;
        if (a[mid]==val)
        {
            flag=1;
            break;
        }
        else if(a[mid]>val)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
        
    }
    

        if (flag==1)
        {
             cout<<"found"<<"\n";
        }
        else cout<<"not found"<<"\n";
    
    return 0;
}
/*input
5 
1 5 4 3 2
5
*///output found