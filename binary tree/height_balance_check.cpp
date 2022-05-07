//balanced height tree 
//balance factor = height(left sub tree) - height(right sub tree)
//if BF > 1 -> Unbalanced node so an unbalanced tree 
//if BF < 1 -> Balanced node, if all the nodes are balanced -> a balanced tree 


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



//calculate height 
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



//balance check ?? 
//hence boolean 
//time complexity -> function will be called n times, where n is the number of nodes
//for each node, calcHeight() is called which is again O(N) complexity
//total = O(N^N)

bool isBalance(Node* root)
{

    //base
    if(root == NULL)
    {
        //by default empty node, so rendering it as balanced 
        return true;
    }
    if(isBalance(root->left) == false)
    {
        return false;
    }

    if(isBalance(root->right) == false)
    {
        return false;
    }

    int lHeight = calcHeight(root->left);
    int rHeight = calcHeight(root->right);

    if(abs(lHeight - rHeight) <= 1)
    {
        return true;
    }
    else
    {
        return false;
    }

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

    //height balanced 
    if(isBalance(root))
    {
        cout << "Balanced tree" << endl;
    }
    else
    {
        cout << "Unbalanced tree" << endl;
    }
    
    return 0;
}