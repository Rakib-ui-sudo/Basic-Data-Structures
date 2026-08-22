#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        //input
        int x,y;
        cin>>x>>y;
        string a,b;
        cin>>a>>b;
        //minimum bar kora...
        int mn_ln=min(x,y);
        for (int i = 0; i <mn_ln; i++)
        {
            //match hhola..
                if (a[i]==b[i])
                {
                    cout<<a[i];
                }
                else//match na hola..
                {
                    break;
                }
            
        }
        cout<<"\n";
        
    }
    
    return 0;
}