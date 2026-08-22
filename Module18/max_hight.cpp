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
    cin >> val;
    Node* root;

    if (val == -1)
        root = NULL; // Fixed: Use assignment (=) instead of comparison (==)
    else 
        root = new Node(val);

    queue<Node*> q;
    if (root != NULL) 
        q.push(root);

    while (!q.empty())
    {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;

        Node* myLeft = NULL;
        Node* myRight = NULL;

        // Fixed: Correct left child logic
        if (l != -1)
            myLeft = new Node(l);

        // Fixed: Correct right child logic
        if (r != -1)
            myRight = new Node(r);
           
        p->left = myLeft;
        p->right = myRight;   
          
        if (p->left != NULL)
            q.push(p->left);
        if (p->right != NULL)    
            q.push(p->right);
    }
     
    return root;
}

int max_hight(Node* root)
{
    if (root==NULL)
    {
        return 0;
    }
    if (root->left==NULL && root->right==NULL)
    {
        return 0;
    }
    int l = max_hight(root->left);
    int r = max_hight(root->right);

   return max(l,r)+1; 
}


int main()
{
    Node* root = input_tree();
    cout<<max_hight(root);
    
    return 0;
}