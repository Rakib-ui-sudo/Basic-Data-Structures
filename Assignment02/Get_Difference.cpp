#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};

void insert_linked_list(Node* &head,Node* & tail,int val)
{
    Node* newnode=new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void get_difference(Node* tmp)
{
    int max=tmp->val;
    int min=tmp->val;
    while (tmp!=NULL)
    {
        if (tmp->val>max)
        {
           max=tmp->val;
        }
        else if(tmp->val<min)
        {
            min=tmp->val;
        }
        tmp=tmp->next;
    }

    int dif=max-min;
     cout<<dif;
}

int main()
{
    Node* head=NULL;
    Node* tail = NULL;
    int n;
    while (true)
    {
        cin>>n;
        if (n==-1)
        {
            break;
        }
        insert_linked_list(head,tail,n);
    }
    get_difference(head);

    return 0;
}