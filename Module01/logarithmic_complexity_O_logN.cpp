#include<bits/stdc++.h>
using namespace std;
int main()
{
    //loop a increement part a *or/ thaketa hoba.
    int n;
    cin>>n;
    // for (int i = 1; i <=n; i*=2)//O(logN)-->>loop ar icrement and decreement
    // {                           //ar upor kaj kora.
    //     cout<<i<<endl;         //loop a incree ment part * or / hola logarithmic complexity hoi
    // }  
    
    for (int i = n; i >=1; i/=3)
    {
        cout<<i<<endl;
    }
    return 0;
}