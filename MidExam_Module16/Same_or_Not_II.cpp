#include<bits/stdc++.h>
using namespace std;
class myStack
{
    public:
    list<int>l;

    void push(int n)
    {
        l.push_back(n);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        int sz = l.size();
        return sz;
    }
    bool empty()
    {
        return l.empty();
    }
};

class myQueue
{
   public:
   list<int>q;

   void push(int n)
   {
     q.push_back(n);
   }
   void pop()
   {
      q.pop_front();
   }
   int front()
   {
     return q.front();
   }
   int size()
   {
      return q.size();
   }
   bool empty()
   {
      return q.empty();
   }
};
int main()
{
    int a, b;
    cin >> a >> b;
    myStack x;
    myQueue y;

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