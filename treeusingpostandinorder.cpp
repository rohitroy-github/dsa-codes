//building a tree using postorder and inorder 


#include <bits/stdc++.h>

using namespace std; 

//structure 
struct Node {
    // any node contains a data, address of left node and address of right node
    int data; 
    struct Node* left;
    struct Node* right;

    //contructor 

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};



int search(int inorder[], int start, int end, int val)
{
  for(int i=start; i<=end; i++)
  {
      if(inorder[i] == val)
      {
          return i;
      }
  }

  return -1;
}



void inorderPrint(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorderPrint(root->left);
    cout << root->data << " ";
    inorderPrint(root->right);
}



Node* buildTree(int postorder[], int inorder[], int start, int end)
{
static int idx = 4; //end index 
if(start > end)
{
    return NULL; 
}

int val = postorder[idx];

idx--;
Node* curr = new Node(val);
if(start == end)
{
    return curr;
}

int pos = search(inorder, start, end, val);
curr->right = buildTree(postorder, inorder, pos+1, end);
curr->left = buildTree(postorder, inorder, start, pos-1);

return curr;
}

int main() 
{
    int postorder[] = {4,2,5,3,1};
    int inorder[] = {4,2,1,5,3};

    //buildTree 
    Node* root = buildTree(postorder, inorder, 0, 4);
    inorderPrint(root);
    cout << "\n";
    return 0;
}