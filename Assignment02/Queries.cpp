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
void insert_head(Node* &head,Node* & tail,int val)
{
    Node* newnode= new Node(val);
    if (head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    newnode->next=head;
    head=newnode;
}

void insert_tail(Node* &head,Node* & tail,int val)
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
//---------------------------------------------------------
void Delete_any_pos(Node* &head,Node* &tail,int idx,int size)
{
     if (idx<0||idx>=size)
     {
        return;
     }

     if (idx==0)//head delete holo.
     {
        Node* deleteNode=head;
        head=head->next;
        delete deleteNode;

        return;
     }
     //-----------------------------------------
     Node* tmp=head;
     for (int i = 0; i <idx-1; i++)
     {
        tmp=tmp->next;
     }
     Node* deleteNode=tmp->next;
     tmp->next=tmp->next->next;
     delete deleteNode;
     //tail=tmp;
     if (tmp->next==NULL)
     {
        tail=tmp;
     }
     
    
}
//------------------------------------------------------------------
void print_linked_list(Node* head)
{
    Node* tmp=head;
    while (tmp!=NULL)
    {
        cout<<tmp->val<<" ";
        tmp=tmp->next;
    }
    cout<<endl;
}

int main()
{
    int t;
    cin>>t;
    Node* head=NULL;
    Node* tail=NULL;
    
   
    while (t--)
    {
        int x,v;
        cin>>x>>v;
        //----------------------
       Node* tmpe=head;
       int size=0;
       while (tmpe!=NULL)
       {
           size++;
           tmpe=tmpe->next;
       }
       //cout<<index;
    //--------------------------
        if (x==0)
        {
            insert_head(head,tail,v);
        }
        else if (x==1)
        {
            insert_tail(head,tail,v);
        }
        else if (x==2)
        {
            Delete_any_pos(head,tail,v,size) ;   
        }
           
      print_linked_list(head);
    }
    
    return 0;
}