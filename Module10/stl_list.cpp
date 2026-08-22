#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l(8,10);
    
    for (auto it = l.begin(); it!= l.end(); it++)
    {
        cout<<*it<<endl;
    }
    
    // list<int>a={1,2,3,4};
    // list<int>b(a);
    // for (int val:b)
    // {
    //     cout<<val<<" ";
    // }

     int x[]={4,3,2,1};
    list<int>y(x,x+4);
    for (int val:y)
    {
        cout<<val<<" ";
    }
    
    return 0;
}