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

void insert_at_tail(Node* &head,Node* &tail,int val)
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

void insert_at_tail2(Node* &head2,Node* &tail2,int val2)
{
   Node* newnode2 = new Node(val2);
   if (head2==NULL)
   {
      head2=newnode2;
      tail2=newnode2;
      return;
   }
   tail2->next=newnode2;
   tail2=newnode2;
}

void print_linked_List(Node* head,Node*head2)
{
    int list1=0;
    int list2=0;
    while (head!=NULL)
    {
        list1++;
        head=head->next;
    }

    while (head2!=NULL)
    {
        list2++;
        head2=head2->next;
    }

    if (list1==list2)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    
    //cout<<list1<<" "<<list2;
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int x,y;
    while (true)
    {
        cin>>x;
        if (x==-1)
        {
            break;
        }
        insert_at_tail(head,tail,x);
    }

    while (true)
    {
        cin>>y;
        if (y==-1)
        {
            break;
        }
        insert_at_tail2(head2,tail2,y);
    }
    
     print_linked_List(head,head2);

    return 0;
}