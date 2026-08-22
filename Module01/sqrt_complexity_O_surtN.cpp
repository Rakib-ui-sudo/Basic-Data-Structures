#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // for (int i = 1; i <=sqrt(n); i++)//O(sqrtN)
    // {
    //     cout<<i<<endl;
    // }

    //for (int i = 1; i*i <=n; i++)
    for (int i = 1; i <=sqrt(n); i++)//n=36 devisor ans=1 2 3 4 6 9 12 18 36
    {                                //1 36 2 18 3 12 4 9 6 6  sqrt babo har kora
        if (n%i==0)
        {
            cout<<i<<" ";//<<n/i<<" ";
        }
        
    }
    
    return 0;
}