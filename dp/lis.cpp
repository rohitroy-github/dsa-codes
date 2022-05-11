#include<iostream> 
#include<bits/stdc++.h>

using namespace std; 

int findLis(int arr[], int n)
{
    int ansArray[n]; 

    int maxElement = 0; 
    int lisCount = 0; 

    int ansArrayIndex = 0; 
    for(int i=0;i<n;i++)
    {
         if(arr[i] > maxElement)
         {
             maxElement = arr[i];
             lisCount++; 

             ansArray[ansArrayIndex] = arr[i];
             ansArrayIndex++;
         }
    }

    //printing ansArray 
    cout << "Answer array is > " << endl; 
    for(int i=0;i<ansArrayIndex;i++)
    {
        cout << ansArray[i] << " "; 
    }
    cout << endl;

    return lisCount; 
}

int main() 
{
    //For dynamic input space 
    // int n, i; 
    // cout << "Enter numbmer of elements > " << endl; 
    // cin >> n; 
    // int arr[n]; 
    // cout << "Enter elements into the array > " << endl; 
    // for(int i=0;i<n;i++)
    // {
    //     cin >> arr[i]; 
    // }    

    // cout << "Entered array is > " << endl; 
    // for(int i=0;i<n;i++)
    // {
    //     cout << arr[i] << " "; 
    // }

    //For static input space 
    int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Maximum LIS count is > " << findLis(arr, n) << endl;   

    return 0;
}