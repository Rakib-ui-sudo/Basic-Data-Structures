#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n,k; cin>>n>>k;
        vector<int>a(n);
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        int ans = 0;
        //match setup
        for (int i = 0; i < n; i++)//first team = i
        {
            for (int j = i+1; j <n; j++)//second team = j
            {
                int curent_fan = 0;
                for (int x = 0; x < n; x++)//
                {
                    if (x==i||x==j)//nijear team
                    {              //sobiasba.
                        curent_fan += a[x]; 
                    }
                    else{
                         //onno team
                         curent_fan += a[x]/2;
                    }

                }
                if (curent_fan>k)//seat ar chaita fan basi
                {
                    ans++;
                }
                
                
            }
            
        }
        
        cout<<ans<<endl;
    }
    
    return 0;
}