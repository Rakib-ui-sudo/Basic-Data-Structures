#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    cin >> a >> b;
    stack<int> x;
    queue<int> y;

    for (int i = 0; i < a; i++)
    {
        int n;
        cin >> n;
        x.push(n);

    }
    for (int i = 0; i < b; i++)
    {
        int n;
        cin >> n;
        y.push(n);
    }
    
    bool flag = true;
    if (x.size()!= y.size())
    {
        cout<<"NO"<<endl;
        return 0;
    }
    else{
         
        while (!x.empty() )
        {
            if (x.top() != y.front())
            {
                flag = false;
                //cout << "NO" << endl;
                break;
            }
            else
            {
                x.pop();
                y.pop();
            }
        }
    }
        

    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else{
       cout << "NO" << endl;
    }

    return 0;
}