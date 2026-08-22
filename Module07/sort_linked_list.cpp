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

void insert_it_linked_list(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    
    tail->next=newnode;
    tail=newnode;//tail->next
    
}


void print_linked_list(Node* head)
{
    while (head!=NULL)
    {
        cout<<head->val<<endl;
        head=head->next;
    }
}

void sort_linked_list(Node* head)
{
    for (Node* i = head; i->next!=NULL; i=i->next)
    {
        for (Node* j = i->next; j!=NULL; j=j->next)
        {
            if (i->val>j->val)
            {
                swap(i->val,j->val);
            }
            
        }
        
    }
    
}


int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int n;
    while (true)
    {
        cin>>n;
        if (n==-1)
        {
            break;
        }
        insert_it_linked_list(head,tail,n);  
    }

    sort_linked_list(head);
    print_linked_list(head);
    return 0;
}