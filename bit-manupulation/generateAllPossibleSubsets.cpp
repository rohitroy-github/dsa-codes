//To generate all the subsets of a given set 

#include<iostream>

using namespace std; 

void generateAllPossibleSubsets(int arr[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i & (1<<j))
            {
                cout << arr[j]<<" ";
            }
        }
        cout << endl;
    }
}

int main() 
{
    int arr[4] = {1, 2, 3, 4}; 
    generateAllPossibleSubsets(arr, 4); 

    return 0;
}