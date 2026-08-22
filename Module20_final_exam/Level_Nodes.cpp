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

int max_hight(Node* root)
{
    if (root==NULL)
        return 0 ;

    if (root->left==NULL && root->right==NULL)
        return 0;
    
    int l = max_hight(root->left);
    int r = max_hight(root->right);
    return max(l, r) + 1;       
}

void tree_level_print(Node* root,int x)
{
     if(root==NULL)
        return ;
     queue<Node*>q;
     if(root!=NULL)
       q.push(root); 

     int level = 0;
     
     while (!q.empty())
     {
        int q_siz = q.size();
        bool tmp = false;
        if(level==x)
           tmp = true;
        
        for (int i = 0; i <q_siz; i++)
        {   
            //1------out------------
            Node* p = q.front();
            q.pop();
            //2-----------worke------------------
             if(tmp==true)
                cout<<p->val<<" ";
            //3----------------push-------------------------
            if(p->left)
               q.push(p->left);
            if(p->right)
               q.push(p->right);   

        }
        
        level++;
     }
     
}


int main()
{
    Node* root = input_tree();
    int x;
    cin>>x;
    int tree_h= max_hight(root);
    if(tree_h<x||x<0)
       cout<<"Invalid"<<endl;
    else   
      tree_level_print(root,x);
 
    return 0;
}