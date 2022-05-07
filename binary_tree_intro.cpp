//Binary Tree 
//properties 
// max nodes at level l = 2^l
// max nodes in a tree of height h = 2^h - 1 
// for n nodes, min possible height or min number of level are log2(n+!) 
// a binary tree with level l has at least log2(n+1) + 1 number of level 

//code 

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


//function for pre order traversal 
void preorder(struct Node* root) 
{
    if (root == NULL)//condition for underflow oe when root node = 0
    {
        return ;
    }
    else 
    {
        // order for pre order is root > left > right 
        cout << root -> data << " ";
        preorder(root-> left);
        preorder(root -> right);
    }
}


//function for inorder traversal 
void inorder(struct Node* root) 
{
    if(root == NULL)//condition for underflow oe when root node = 0
    {
        return ;
    }
    else
    {
        // order for inorder is left > root > right 
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
    }
}


//function for post order traversal
void postorder(struct Node* root)
{
    if(root == NULL)//condition for underflow oe when root node = 0
    {
        return ;
    }
    else
    {
        // order for postorder is left > right > root 
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<" ";
    }
}


int main()
{
    struct Node* root = new Node(1);

    //making the tree 
    
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->left->right = new Node(5);

    root->right->left = new Node(6);
    root->right->right = new Node(7);
    
    /**
     *              0
     *           2      3   
     *         4   5   6  7
     */
    cout<<"preorder traversal value :"<<"\n";
    preorder(root);
    cout<<"\n";
    cout<<"postorder traversal value :"<<"\n";
    inorder(root);
    cout<<"\n";
    cout<<"inorder traversal value :"<<"\n";
    postorder(root);
    cout<<"\n";

    //return 0 
    return 0;
}