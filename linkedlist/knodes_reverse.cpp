//reverse a linked list 
//recursive fashion 
//every consecutive k elements will be reversed

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



//reverse functiuon 
Node* reversek(Node* &head, int k)
{
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;

    while(currptr != NULL && count<k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }

    //reversing the rest as needed
    if(nextptr != NULL)
    {
    head->next = reversek(nextptr, k);
    }

    return prevptr;
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

    //every consecutive 2 elements will be reversed 
    int k=2;
    Node* newhead = reversek(head, k);
    display(newhead);
}
