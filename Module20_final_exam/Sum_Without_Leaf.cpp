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
    int val;
    cin>>val;
    Node* root;
    if (val==-1)
       root=NULL;
    else
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
      Node* myLeft=NULL;
      Node* myRight=NULL;
      
      if(l!=-1)
         myLeft=new Node(l);
      if(r!=-1)
         myRight=new Node(r);
         
      p->left=myLeft;
      p->right=myRight;
      
      if(p->left!=NULL)
         q.push(p->left);
      if(p->right)
         q.push(p->right);   
   }
    
   return root;
}

int print_parent_node(Node* root)
{
    int sum_parent=0;

    if(root==NULL)
    {
        cout<<"root tree empty";
        return 0;
    } 

     queue<Node*>q;
     if(root!=NULL)
        q.push(root);
     while (!q.empty())
     {
        Node* p = q.front();
        q.pop();

        if((p->left && p->right)|| (p->left==NULL&&p->right!=NULL)||(p->left!=NULL&&p->right==NULL))
        {
            sum_parent+= p->val;
        }

        if (p->left!=NULL)
            q.push(p->left);
        if(p->right!=NULL)
            q.push(p->right);   
        
     }
     return sum_parent;        
}

int main()
{
    Node* root = input_tree();
    int sum = print_parent_node(root);
    cout<<sum<<endl;
    return 0;
}