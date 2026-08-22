#include<bits/stdc++.h>
using namespace std;
bool cmp(int l,int r)
{
    return l<r;
}
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int a,b;
        cin>>a>>b;
        vector<int>v(a);
        for (int i = 0; i < a; i++)
        {
            cin>>v[i];
        }

        for (int i = 0; i <a; i++)//o(N*N)
        {
            for (int j = 0; j < a-1; j++)
            {
                if (v[j]>v[j+1] && v[j] + v[j+1]<=b)
                {
                    swap(v[j],v[j+1]);
                }
                
            }
            
        }
        
        
        for(int val:v)
        {
            cout<<val<<" ";
        }
        cout<<endl;
       
    }
    
    return 0;
}