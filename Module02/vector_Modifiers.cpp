#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v={1,2,3,4,2};
    vector<int>v2;
    vector<int>v3={100,100,100};
    v2=v;

    // for (int i = 0; i <v2.size(); i++)
    // {
    //     cout<<v2[i]<<" ";
    // }

   // v.pop_back();//remove kora dan thakea 1 ti

    //v.insert(v.begin()+2,v3.begin(),v3.end());

   //v.erase(v.begin()+1,v.begin()+4);

   //replace(v.begin(),v.end(),2,100);

    // for(int x:v)
    // {
    //     cout<<x<<" ";
    // }
//===========================================
    
  auto it= find(v.begin(),v.end(),2);
  if (it==v.end())
  {
    cout<<"Not found";
  }
  else
  {
    cout<<"found"<<" = "<<*it;
  }
  

    return 0;
}