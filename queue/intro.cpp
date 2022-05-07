//queue 
//introduction 
//LIFO 

//array implementation 

#include<iostream>

#define n 20

using namespace std; 

class queue 
{
    //array of pointers
    int* arr;
    int front;
    int back;

    //contructor
    public:
    queue()
    {
        arr = new int[n];
        //in the bigining all the pointers will be pointing at -1
        front = -1;
        back = -1;
    }


    //push operation 
    void push(int x)
    {
        if(back == n-1)
        {
            cout << "Overflow" << endl;
            return;
        }

        back++;
        arr[back] = x;

        if(front == -1)
        {
            front++;
        }
    }


    //pop operation
    void pop()
    {
        if(front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return;
        }

        front++;
    }



    //peek operation
    int peek()
    {
        if(front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }

        return arr[front];
    }



    //checking if queue is empty or not ??
    bool empty()
    {
        if(front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return true;
        }
        else
        {
            return false;
        }
    }


};


//main function
int main()
{
    queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    cout << q.peek() << endl;
    q.pop();

    //check 
    cout << q.empty() << endl;

}