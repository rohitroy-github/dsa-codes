//height of a binary tree

#include "bits/stdc++.h"

using namespace std;

//structure 
struct Node {
    // any node contains a data, address of left node and address of right node
    int data; 
    struct Node* left;
    struct Node* right;

    //contructor 

    Node(int val) 
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};



//sum replacement function 
void sumReplace(Node* root)
{

    //base condition 
    if(root == NULL)
    {
        return;
    }

    //recursive call 
    sumReplace(root->left);
    sumReplace(root->right);

    //if node has no left or right node, then its a leaf so the value remains unchnaged 
    if(root->left != NULL)
    {
        root->data += root->left->data;
    }

    if(root->right != NULL)
    {
        root->data += root->right->data;
    }
}

//for printing purpose
void preorder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    cout << root->data << "->";

    preorder(root->left);
    preorder(root->right);
}


//main fucntion
int main()
{

    Node* root = new Node(1);
    //making the tree 
    
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);

    //sum replacement 
    cout << "Original tree data is ";
    preorder(root);
    cout << endl;

    sumReplace(root);
    cout << "Tree data after performing sum replacement ";
    preorder(root);
    cout << endl;
    return 0;
}