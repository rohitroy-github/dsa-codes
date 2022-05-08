//Find the unique number in the number presents in a given array using Bit Manupulation
//Using XOR operator

#include<iostream>

using namespace std; 

int findUniqueNumberInArray(int arr[], int n)
{
    int xorsum = 0; 
    //a XOR a -> 0 
    //0 XOR b -> b
    //XOR(all elements of arr[]) -> unique element
    for(int i=0;i<n;i++)
    {
        xorsum = xorsum^arr[i]; 
    }

    return xorsum; 
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3};
    cout << findUniqueNumberInArray(arr, 7) << endl;

    return 0; 
}