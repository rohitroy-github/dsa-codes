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



int calcHeight(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int lheight = calcHeight(root->left);
    int rheight = calcHeight(root->right);
    return max(lheight, rheight) + 1;
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


    //level order traversal 
    cout << "Height of the tree is " << calcHeight(root) << endl;

    return 0;
}