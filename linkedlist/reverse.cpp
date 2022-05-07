//reverse a linked list 

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

Node* reverse(Node* head)
{
    //conditions at the very beggining 
    Node* prevptr = NULL;
    Node* currptr = head;
    Node* nextptr;

    while(currptr!=NULL)
    {
        //traversing condition
        nextptr = currptr->next;

        currptr->next = prevptr;

        //iteration all the pointers by one step 
        prevptr = currptr;
        currptr = nextptr;
    }
    //currptr is at null now

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

    Node* newhead = reverse(head);
    display(newhead);
}
