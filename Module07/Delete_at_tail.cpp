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
    tail=tail->next;   
}

void print_linked_list(Node*head)
{
    while (head!=NULL)
    {
        cout<<head->val<<endl;
        head=head->next;
    }
    
}

void delete_at_tail(Node* head,Node* &tail,int idx)
{
    Node* tmp=head;
    for (int i = 1; i <idx; i++)
    {
        tmp=tmp->next;
    }
    Node* deleteNode=tmp->next;
    tmp->next=tmp->next->next;
    delete deleteNode;
    tail=tmp;   
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
    
    print_linked_list(head);
    
    return 0;
}