#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst;
    int n;
    while (true)
    {
        cin>>n;
        if (n==-1)
        {
            break;
        }
        lst.push_back(n);
    }
    lst.sort();
    for(int val:lst)
    {
        cout<<val<<" ";
    }
    
    return 0;
}