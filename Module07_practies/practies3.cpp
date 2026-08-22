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

void insert_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}

void print_Max(Node* head)
{
    int max=head->val;
    while (head!=NULL)
    {
        if (max<head->val)
        {
            max=head->val;
        }
        
        head=head->next;
    }
    cout<<max;
}

int main()
{
    Node* head=NULL;
    Node* tail= NULL;
    int n;
    while (true)
    {
        cin>>n;
        if (n==-1)
        {
            break;
        }
        insert_tail(head,tail,n);
    }
    print_Max(head);
    return 0;
}