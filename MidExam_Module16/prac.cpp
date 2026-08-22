#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;   
    }
};

void insert_at_head(Node* &head,Node* &tail,int val)//head
{
    Node* newnode = new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }

    newnode->next=head;
    head->prev=newnode;
    head=newnode;
}

void insert_at_tail(Node* &head,Node* &tail,int n)//tail
{
    Node* newnode = new Node(n);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }

    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
}

void insert_at_any_pos(Node* &head,Node* &tail,int idx,int val)//any pos
{
    Node* newnode = new Node(val);
    Node* tmp= head;

    for (int i = 0; i < idx-1; i++)
    {
        tmp=tmp->next;
    }

    newnode->next=tmp->next;
    newnode->prev=tmp;
    if (tmp->next!=NULL)
        tmp->next->prev=newnode;
    else
        tail=newnode;      
    tmp->next=newnode;
}

void print_L(Node* head)//print1  left to right
{
    Node* tmp = head;
    while (tmp!=NULL)
    {
        cout<<"L -> "<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

void print_R(Node* tail)//print2  right to left
{
    
    Node* tmp = tail;
    while (tmp!=NULL)
    {
        cout<<"R -> "<<tmp->val<<" ";
        tmp=tmp->prev;
    }
    cout<<endl;
}

int size(Node* head)//size
{
    Node* tmp = head;
    int val=0;
    while (tmp!=NULL)
    {
        val++;
        tmp=tmp->next;
    }
    return val;
}

int main()
{
    Node * head=NULL;
    Node * tail =NULL;

    int t;
    cin>>t;
    while (t--)
    {
        int x,v;
        cin>>x>>v;
        int siz = size(head);

        if (x<0 || x>siz)
        {
            cout<<"Invalid"<<endl;
            continue;               
        }

        if (x==0)
        {
            insert_at_head(head,tail,v);
        }
        else if (x==siz)
        {
            insert_at_tail(head,tail,v);
        }
        else
        {
            insert_at_any_pos(head,tail,x,v);   
        }

        print_L(head);
        print_R(tail);
    }

    return 0;
}