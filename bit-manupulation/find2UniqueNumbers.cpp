//Find 2 unique elements in an array where all the numbers except those 2, are present twice. 

#include<iostream>

using namespace std; 

//function to find out set bit ! 
int setBitFunc(int n, int pos)
{
    return((n & (1 << pos)) != 0); 
}

//function to search for unique element
void uniqueElement(int arr[], int n)
{
    int xorSum = 0; 
    //XOR of all elements
    for(int i=0;i<n;i++)
    {
        xorSum = xorSum^arr[i]; 
    }
    //xorSum contains 2 unique numbers
    int pos = 0; 
    int setBit = 0; 
    int tempXor = 0; 
    while(setBit != 1)
    {
        int setBit = xorSum & 1; 
        pos++; 
        xorSum = xorSum >> 1; 
    }
    
    int newXor = 0; 
    for(int i=0;i<n;i++)
    {
        if(setBitFunc(arr[i], pos-1))
        {
            newXor = newXor^arr[i]; 
        }
    }

    cout << newXor << endl; //unique element 1 
    cout << (tempXor^newXor) << endl; //unique element 2
}

int main() 
{
    int arr[] = {1, 2, 3, 1, 2, 3, 5, 7}; 
    uniqueElement(arr, 8); 
    
    return 0; 
}