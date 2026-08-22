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

void print_revers(Node*tmp)//recarsition
{
   //bascase
   if (tmp==NULL)
   {
       return;
   }
   print_revers(tmp->next);
   cout<<tmp->val<<endl;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while (true)
    {
        cin>>val;
        if (val==-1)
        {
            break;
        }
        insert_linked_list(head,tail,val); 
    }
   
    print_revers(head);
    return 0;
}