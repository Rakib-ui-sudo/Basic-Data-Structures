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

void insert_it_linked_list(Node*&head,Node* &tail,int val)
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


bool is_sorted_linked_list(Node*head)
{
    if (head==NULL||head->next==NULL)
    {
        return true;
    }

    while (head->next!=NULL)
    {
        if (head->val>head->next->val)
        {
            return false;
        }
        head=head->next;
    }
    
    return true;
}

int main()
{
    Node* head = new Node(1);
    Node* tail = new Node(2);

    head->next=tail;

    insert_it_linked_list(head,tail,4);

    if (is_sorted_linked_list(head))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }


    return 0;
}