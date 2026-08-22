#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>st,sta;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        st.push(x);
    }

    int m;
    cin>>m;
    for(int i=0;i<m;i++)
    {
        int x;
        cin>>x;
        sta.push(x);
    }

    int a = st.size();
    int b = sta.size();
    if(a==b)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    
    return 0;
}