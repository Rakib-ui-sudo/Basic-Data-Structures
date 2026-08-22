#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        stack<char>st;
        string s;
        cin>>s;
        int siz = s.size();
        for (int i = 0; i < siz; i++)
        {
            st.push(s[i]);
        }
        

        long long one = 0;
        long long zero = 0;
        while (!st.empty())
        {
            if (st.top()== '0')
            {
                zero++;
                st.pop();
            }
            else if (st.top()== '1')
            {
                one++;
                st.pop();
            }
            
        }

        if (one==zero)
        {
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
                
       // cout<<"first =>"<<one<<"second=>"<<zero<<endl;
    }
    
    return 0;
}