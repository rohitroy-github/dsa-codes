//Count the number of ones in the given number/ binary representation 

#include<iostream>

using namespace std; 

int countNumberOf1(int n)
{
    //every time we do a n AND n-1, one of the 1's will become 0 
    //so we will keep on doing the above procedure untill all the digit are 0 === 0 
    //return the number of iterations needed or count
    int count = 0;
    while(n!= 0)
    {
        n = n & n-1; 
        count++; 
    }

    return count; 
}

int main() 
{
    cout << countNumberOf1(19) << endl; 

    return 0;
}