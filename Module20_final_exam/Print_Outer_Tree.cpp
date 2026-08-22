#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
   int val;
   Node *left;
   Node *right;

   Node(int val)
   {
      this->val = val;
      this->left = NULL;
      this->right = NULL;
   }
};

Node *input_tree()
{
   int val;
   cin >> val;
   Node *root = NULL;
   if (val != -1)
      root = new Node(val);

   queue<Node *> q;
   if (root != NULL)
      q.push(root);
   while (!q.empty())
   {
      Node *p = q.front();
      q.pop();

      int l, r;
      cin >> l >> r;
      Node *myLeft = NULL;
      Node *myRight = NULL;

      if (l != -1)
         myLeft = new Node(l);
      if (r != -1)
         myRight = new Node(r);

      p->left = myLeft;
      p->right = myRight;

      if (p->left)
         q.push(p->left);
      if (p->right)
         q.push(p->right);
   }
   return root;
}

void left_node(Node *root)
{
   if (root == NULL)
      return;

   if (root->left!=NULL)
      left_node(root->left);
   else if (root->right!=NULL)
      left_node(root->right);

   cout << root->val << " ";
}

void right_node(Node *root)
{
   if (root == NULL)
      return;

   cout << root->val << " ";

   if (root->right!=NULL)
      right_node(root->right);
   else if (root->left!=NULL)
      right_node(root->left);
}

int main()
{
   Node *root = input_tree();

   if (root->left==NULL && root->right==NULL)
   {
      cout<<root->val<<" ";
   }
   
   else if (root->left == NULL)
   {
      cout << root->val << " ";
      right_node(root->right);
   }

   else if (root->right == NULL)
   {
      left_node(root);
   }

   else if (root->left && root->right)
   {
      left_node(root);
      right_node(root->right);
   }

   return 0;
}