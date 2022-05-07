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


void deletion(Node* &head, int val)
{
    Node* temp = head;
    while(temp->next->data != val)
    {
        temp = temp->next;
    }

    Node* todelete = temp->next;
    temp->next = temp->next->next;


    delete todelete;
}


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


//main function
int main()
{
    Node* head = NULL;

    //insert at end
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);
    display(head);

    //deletion
    deletion(head, 3);
    display(head);

    return 0;
}