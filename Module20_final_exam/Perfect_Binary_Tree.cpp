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

int count_nodes(Node* root)
{
    if(root==NULL)
       return 0;

    int l = count_nodes(root->left);
    int r = count_nodes(root->right);
    int sz=l+r+1;
    return sz;   
}

int max_hight(Node* root)
{
    if(root==NULL)
       return 0;
    if(root->left==NULL&&root->right==NULL)
       return 1;
       
    int l = max_hight(root->left);
    int r = max_hight(root->right);
    
    return max(l,r)+1;
}

int main()
{
    Node* root = input_tree();
    int h = max_hight(root);
    int nodes = count_nodes(root);
   

    //formula  Total nodes = 2^max_hight - 1
    int ans = (1<<h)-1 ;
     if(ans==nodes)
        cout<<"YES"<<endl;
     else
        cout<<"NO"<<endl;   
 
    return 0;
}