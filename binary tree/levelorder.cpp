//level order tree 
//queue implementation 
//FIFO


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


void printLevelOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }

    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node != NULL)
        {
        cout << node->data << " ";

        if(node -> left)
            q.push(node -> left);

        if(node-> right)
            q.push(node->right);

        }
        else if (!q.empty())
            q.push(NULL);

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


    //level order traversal 
    printLevelOrder(root);

    return 0;
}