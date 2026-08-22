#include<bits/stdc++.h>
using namespace std;
int main()
{
    //vector<int>v;      //Type 1
    //vector<int>v(5);   //Type 2
    //cout<<v.size()<<" "; 

    //vector<int>v(5,-1);  //Type 3
    //vector<int>v2(v);    //Type 4
    int a[5]={2,4,1,3,5};
    //vector<int>v(a,a+5);   //Type 5
    
    vector<int>v={2,3,1,4};  //Type 6
    for (int i = 0; i <v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    return 0;
}
