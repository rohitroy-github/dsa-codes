//Making a tree using the pre order and inorder array 

// pre order = 12345 
// in order = 42153

#include <bits/stdc++.h>
#include <iostream>

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



int search(int inorder[], int start, int end, int curr)
{
    for(int i = start; i<=end; i++)
    {
        if(inorder[i] == curr)
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


//retuen type is a Node* because it will be returning a node
Node* buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0; 

    if(start > end)
    {
        return NULL;
    }
    
    int curr = preorder[idx];
    idx++;
    Node* node = new Node(curr);

    if(start == end)
    {
        return node;
    }
    int pos = search(inorder, start, end, curr);
    node->left = buildTree(preorder, inorder, start, pos-1);
    node->right = buildTree(preorder, inorder, pos+1, end);

    return node; 
}



int main() 
{
    int preorder[] = {1, 2, 4, 3, 5};
    int inorder[] = {4, 2, 1, 5, 3};

    //build tree 
    Node* root = buildTree(preorder, inorder, 0, 4);
    inorderPrint(root);

     return 0;
}