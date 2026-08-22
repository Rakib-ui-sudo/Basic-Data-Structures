#include<bits/stdc++.h>
using namespace std;

//Recarsition

void rec(int i,int n)
{
     //bascase
     if (i>n)
     {
        return;
     }
     //cout<<i<<endl;
     rec(i+1,n);
     cout<<i<<endl;
}

int main()
{
    int n;
    cin>>n;
    rec(1,n);
    
    return 0;
}