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

void print_linked_list(Node* head)
{
    Node* tmp=head;
    Node* r=head->next;
    int flag=0;
    while (tmp!=NULL)
    {
        //cout<<tmp->val<<endl;
         while (r!=NULL)
         {
            if (tmp->val==r->val)
            {
                flag=1;
                break;
            }
            r=r->next;
         }
         

        tmp=tmp->next;
    }

    if (flag==0)
    {
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    
    
}

int main()
{
    Node* head = new Node(5);
    Node* a = new Node(4);
    Node* b = new Node(1);
    Node* c = new Node(3);
    Node* d = new Node(2);

    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    print_linked_list(head);

    return 0;
}