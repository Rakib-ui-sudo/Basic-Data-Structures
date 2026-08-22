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
        return;
    }

    // Node* tmp=head;
    // while (tmp->next!=NULL)//time complexity basi.
    // {
    //     tmp=tmp->next;
    // }
    // tmp->next=newnode;

    tail->next=newnode;
    tail=tail->next;
}

void print_linked_list(Node* head)
{
    int count=0;
    while (head!=NULL)
    {
         cout<<head->val<<endl;
        head=head->next;
        count++;
    }
    cout<<count;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next=a;
    a->next=tail;

    insert_at_linked_list(head,tail,100);

    print_linked_list(head);

    return 0;
}