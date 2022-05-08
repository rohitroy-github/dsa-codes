//Find a unique number from an array where all the rest of the elements are present in triplets. 

#include<iostream>

using namespace std; 

bool getBit(int n, int pos)
{
    return ((n & (1 << pos))!=0);
}

int setBit(int n, int pos)
{
    return (n | (1<<pos)); 
}

int findUniqueNumberFromTriplets(int arr[], int n)
{
    int  result = 0; 
    for(int i=0;i<64;i++)
    {
        int sum = 0; 
        for(int j=0;j<n;j++)
        {
            if(getBit(arr[j], i))
            {
                sum++; 
            }
        }
        if(sum % 3 != 0)
        {
            result = setBit(result, i);
        }
    }

    return result;     
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 1, 2, 3};
    cout << findUniqueNumberFromTriplets(arr, 10) << endl; 
    return 0; 
}