//Check if a given number is power of 2 or not (eg > 16 -> yes) using Bit Manupulation

#include<iostream>

using namespace std; 

bool isPowerOf2(int n)
{
    //corner case > when n = 0 -> return false / 0 
    //(powers of 2) will always return 0 from (n AND n-1)
    return(n && !(n & n-1)); 
}

int main() 
{
    cout << isPowerOf2(16) << endl;
}