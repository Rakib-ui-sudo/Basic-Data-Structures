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

void insert_at_linked_list(Node* &head,Node* &tail,int val)
{
    Node* newnode= new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    tail=newnode;    
}

void print_linked_list(Node* tmp)
{
    if (tmp==NULL)
    {
        return;
    }
    cout<<tmp->val<<endl;
    print_linked_list(tmp->next);
}

//Delete function
void Delete_at_head(Node* &head)
{
    Node* deleteNode=head;
    head = head->next;

    delete deleteNode;
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
        insert_at_linked_list(head,tail,n);
    }
    Delete_at_head(head);
    
    print_linked_list(head);
    
    return 0;
}