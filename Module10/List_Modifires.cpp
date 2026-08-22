#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int>l={10,20,30,40,50,60,70};
    list<int>l2;
    //l2=l;
    //l2.assign(l.begin(),l.end());
    // l.push_back(100);
    // l.push_front(50);

    // l.pop_front();
    // l.pop_front();
    // l.pop_back();

    //cout<<*next(l.begin(),3);

    //l.insert(next(l.begin(),2),100);

    //l.erase(next(l.begin(),2),next(l.begin(),5));
    //replace(l.begin(),l.end(),20,100);

    auto it=find(l.begin(),l.end(),200);

    if (it==l.end())
    {
        cout<<"Not found"<<endl;
    }
    else
    {
        cout<<"Found"<<endl;
    }
    

    for (int val:l)
    {
        cout<<val<<" ";
    }
    
    return 0;
}