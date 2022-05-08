//Tower Of Hanoi Problem 
//We will have some blocks on the rod A 
// We have to take these blocks to rob B 
// Conditions > We can't have a bigger block over a smaller rod. 

#include<iostream>

using namespace std; 

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if(n == 0)
    {
        return; //base case
    }

    towerOfHanoi(n-1, src, helper, dest); 

    cout << "Move from " << src << " to " << dest << endl; 

    towerOfHanoi(n-1, helper, dest, src); 
}

int main()
{
    towerOfHanoi(3, 'A', 'C', 'B'); 
    return 0; 
}