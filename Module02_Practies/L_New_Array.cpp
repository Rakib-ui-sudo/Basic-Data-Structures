#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
    return a>b; //boror aga.
}

int main()
{
    int n;
    cin>>n;
    vector<int>a(n);
    vector<int>b(n);
    for (int i = 0; i <n; i++)
    {
        cin>>a[i]>>b[i];
        
    }
    vector<int>c=a;
    c.insert(c.end(),b.begin(),b.end());//array marge korano.

    sort(c.begin(),c.end(),cmp); // boro thakea soto

    // for(int i=0;i<n+n;i++)
    for (int x:c)
    {
       cout<<x<<" ";
    }
    

    return 0;
}    

    