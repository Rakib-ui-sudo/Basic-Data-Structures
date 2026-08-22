#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
//--------------------------------------------------------------------------------
void insert_linked_list1(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}

void insert_linked_list2(Node *&head2, Node *&tail2, int val)
{
    Node *newnode = new Node(val);
    if (head2 == NULL)
    {
        head2 = newnode;
        tail2 = newnode;
        return;
    }
    tail2->next = newnode;
    tail2 = newnode;
}
//--------------------------------------------------------------------------------------------
void same_to_same(Node *head, Node *head2)
{
    Node* tmp1=head;
    Node* tmp2=head2;
    int list1 = 0;
    int list2 = 0;
    while (head != NULL)
    {
        list1++;
        head = head->next;
    }

    while (head2 != NULL)
    {
        list2++;
        head2 = head2->next;
    }
//=============================
    if (list1 == list2)
    {
        int flag = 0;
        while (tmp1 != NULL)
        {
            if (tmp1->val!=tmp2->val)
            {
                flag=1;
                break;
            }
            
            tmp1=tmp1->next;
            tmp2=tmp2->next;
        }
        if (flag == 0)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }  
    }
    else
    {
        cout << "NO";
    }
}
//----------------------------------------------------------------------------------
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    Node *head2 = NULL;
    Node *tail2 = NULL;
    int a;
    while (true)
    {
        cin >> a;
        if (a == -1)
        {
            break;
        }
        insert_linked_list1(head, tail, a);
    }

    int b;
    while (true)
    {
        cin >> b;
        if (b == -1)
        {
            break;
        }
        insert_linked_list2(head2, tail2, b);
    }
    same_to_same(head, head2);

    return 0;
}