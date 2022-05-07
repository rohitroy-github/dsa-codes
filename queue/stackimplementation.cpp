//queue
//stack implementation - 1

#include "bits/stdc++.h"

using namespace std;

class Queue
{
    stack<int> s1;
    stack<int> s2;

    public:

    void enQueue(int x)
    {
        s1.push(x);
    }



    int deQueue()
    {
        if(s1.empty() and s2.empty() )
        {
            cout << "queue is empty \n";
            return -1;
        }

        if(s2.empty())
        {
            s2.push(s1.top());
            s1.pop();
        }

        int topval = s2.top();
        s2.pop();
        return topval;
    }

    

    bool empty()
    {
        if(s1.empty() and s2.empty())
        {
            return true;
        }

        return false;
    }
};



//main function
int main()
{
    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    cout << q.deQueue() << endl;
    q.enQueue(5);
    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
    cout << q.deQueue() << endl;
}