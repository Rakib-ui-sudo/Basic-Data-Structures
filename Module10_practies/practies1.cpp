#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> x;
    list<int> y;
    int a, b;
    while (true)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }
        x.push_back(a);
    }

    while (true)
    {
        cin >> b;
        if (b == -1)
        {
            break;
        }
        y.push_back(b);
    }

    int count = 0;
    int count2 = 0;
    for (int val : x)
    {
        count++;
    }

    for (int val : y)
    {
        count2++;
    }

    if (count == count2)
    {
        if (is_permutation(x.begin(), x.end(), y.begin()))
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
    }
    else
    {
        cout << "NO";
    }

    return 0;
}