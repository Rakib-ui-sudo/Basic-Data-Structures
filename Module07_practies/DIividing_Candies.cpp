#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >>n>> x;
        vector<int> a(n);
        for (int i = 0; i <n; i++)
        {
            cin>>a[i];
        }

        vector <int> count;
        //find which jars are divisible by x,
        for (int i = 0; i <n; i++)
        {
           if (a[i]%x==0)
           {
              count.push_back(a[i]);
           }
           
        }
        //int Max = count[0];
        int large = 0;
        for (int i = 0; i <count.size(); i++)
        {
            // if (Max<count[i])
            // {
            //     Max=count[i];
            // }

            large =max(large,count[i]);
        }
        
        cout<<large<<endl;
    }

    return 0;
}