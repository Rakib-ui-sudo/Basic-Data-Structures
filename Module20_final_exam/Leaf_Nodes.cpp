#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* input_tree()
{
    int val; cin>>val;
    Node* root=NULL;
    if(val!= -1)
       root=new Node(val);

    queue<Node*>q;
    if(root!=NULL)
       q.push(root);
    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft = NULL;
        Node* myRight = NULL;

        if(l!=-1)
           myLeft=new Node(l);
        if(r!=-1)
           myRight=new Node(r);

        p->left=myLeft;
        p->right=myRight;
        
        if(p->left)
           q.push(p->left);
        if(p->right)
           q.push(p->right);   
    }
     return root;     
}

bool cmp(int l,int r){
    return l>r;
}

vector<int> print_leaf_node_reverse(Node* root)
{
    vector<int>v;

     queue<Node*>q;
     if(root!=NULL)
        q.push(root);
     while (!q.empty())
     {
        Node* p = q.front();
        q.pop();

        if(p->left==NULL && p->right==NULL)
        {
            v.push_back(p->val);
        }

        if (p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);   
        
     }
    
    sort(v.begin(),v.end(),cmp);
    
     return v;        
}


int main()
{
    Node* root = input_tree();
    vector<int>v = print_leaf_node_reverse(root);

    for (int val: v)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    
    
    return 0;
}