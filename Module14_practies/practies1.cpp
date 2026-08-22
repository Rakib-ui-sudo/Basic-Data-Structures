#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        q.push(x);
    }

    // ধাপ ১: queue থেকে stack-এ elements ট্রান্সফার করা (এতে order উল্টে যাবে)
    stack<int> st;
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }

    // ধাপ ২: stack থেকে নতুন queue (q2)-এ elements ট্রান্সফার করা
    queue<int> q2;
    while (!st.empty())
    {
        q2.push(st.top());
        st.pop();
    }

    // ধাপ ৩: নতুন queue (q2)-এর elements প্রিন্ট করা
    while (!q2.empty())
    {
        cout << q2.front() << " ";
        q2.pop();
    }

    return 0;
}