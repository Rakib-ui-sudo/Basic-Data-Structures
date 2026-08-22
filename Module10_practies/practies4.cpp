#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    list<int> lst;
    cin>>t;
    while (t--)
    {
        int X, V;
        cin >> X >> V;
        int siz = lst.size();
        if (X < 0 || X > siz)
        {
            cout << "Invalid" << endl;
        }
        else
        {
            if (X == 0)
            {
                lst.push_front(V);
            }
            else if (X == siz)
            {
                lst.push_back(V);
            }
            else
            {
                auto it = lst.begin();
                advance(it, X);
                lst.insert(it, V);
            }
        }
        for(int val:lst)
        {
            cout<<val<<" ";
        }
        cout<<endl;
    }

    return 0;
}