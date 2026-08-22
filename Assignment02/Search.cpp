#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void inser_it_linked_list(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void search(Node *head, int x)
{
    Node *tmp = head;
        int idx = 0;
        int flag = 0;
        while (tmp != NULL)
        {
            if (x == tmp->val)
            {
                flag=1;
                break; 
            }
            idx++;
            tmp = tmp->next;
        }

        if (flag==1)
        {
            cout<<idx<<endl;
        }
        else if (flag==0)
        {
            cout<<"-1"<<endl;
        }

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        Node *head = NULL;
        Node *tail = NULL;
        int n;
        while (true)
        {
            cin >> n;
            if (n == -1)
            {
                break;
            }
            inser_it_linked_list(head, tail, n);
        }
        int x;
        cin >> x;
        search(head,x);
    
    }

    return 0;
}