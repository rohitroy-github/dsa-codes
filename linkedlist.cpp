#include<iostream>
using namespace std;


class node
{
    public:
    int data;//for the node data
    node* next;//pointing to next node

    node(int val) //construntor
    {
        data = val;
        next = NULL;
    }

};

void insertAtTail(node* &head, int val)
{
    node* n = new node(val);

    if(head == NULL)
    {
        head = n;
        return;
    }

    node* temp = head;
    while(temp -> next != NULL)//check for last element
    {
        temp = temp -> next;
    }
    temp -> next = n;
}

void display(node* head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout << temp-> data <<"->";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main()//main function
{
    node* head = NULL;
    insertAtTail(head, 10);
    insertAtTail(head, 20);
    insertAtTail(head, 30);
    display(head);
    return 0;
}