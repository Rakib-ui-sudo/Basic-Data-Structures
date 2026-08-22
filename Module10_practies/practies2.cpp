#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> x;
    int a;
    while (true)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }
        x.push_back(a);
    }
    
    x.sort(greater<int>());
   
    for (int val : x)
    {
        cout<<val<<" ";
    }

    

    

    return 0;
}