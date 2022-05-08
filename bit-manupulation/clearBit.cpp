//To clear/ set 0 at the given particular position 

#include<iostream> 

using namespace std; 

int clearBit(int n, int pos)
{
    //~ = 1's compliment 
    int mask = ~(1 << pos); 
    return(n & mask); 
}

int main() 
{
    cout << clearBit(5, 2) << endl; 

    return 0; 
}