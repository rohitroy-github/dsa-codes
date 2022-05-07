//linked list 
//intro 


#include <iostream>

using namespace std;

//creating class
class Node
{
    public:

    int data;
    Node* next;

    //constructor
    Node(int val)
    {
        data = val;
        next = NULL;
    }
}; //end of class


//inserting at the end
void insertAtTail(Node* &head, int val)
{
    //creating a new Node 
    Node* n = new Node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = n;
}


//inserting at the beginning 
void insertAtHead( Node* &head,int val)
{
    Node* n = new Node(val);
    //connecting the new Node to head pointer of the linked list
    n->next = head;
    //making n as the new head
    head = n;
}


//printing the linked list 
void display(Node* head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}


//searching any elemet into the linked list
bool search(Node* head, int key)
{
    Node* temp = head;
    while(temp!= NULL)
    {
        if(temp->data == key)
        {
            return true;
        }

        //traversing
        temp= temp->next;
    }

    return false;
}


//main function
int main()
{
    Node* head = NULL;

    //insert at end
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    display(head);

    //insert at beggining
    insertAtHead(head, 4);
    display(head);

    //search
    cout << search(head, 5)<< endl;

    return 0;
}