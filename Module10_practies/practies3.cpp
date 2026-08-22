#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> lst;
    int n;
    while (true)
    {
        cin >> n;
        if (n == -1)
        {
            break;
        }
        lst.push_back(n);
    }

    int steps = lst.size() / 2; // একবারই গণনা, O(1) কারণ list.size() এখন O(1)

    auto it = lst.begin();
    auto j = prev(lst.end());

    bool isPalindrome = true;

    for (int i = 0; i < steps; i++, it++, j--)
    {
        if (*it != *j) //derefarance..
        {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome==true)
    {
        cout<<"YES";
    }
    else cout<<"NO";
    

    return 0;
}