//mergesort 

//algorithm 
/**
 * based on divide and conquer algorithm 
 * mergesort(arr, l, r)
 * if l>r 
 * mid = (l+r) / 2 
 * mergesort(arr, l, mid)
 * mergesort(arr, mid+1, r)
 * merge(arr, l, mid, r)
 */

//code

#include<iostream>
using namespace std; 

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; 
    int n2 = r - mid; 

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = arr[mid + i + 1];
    }

    int i = 0;
    int j = 0; 
    int k = l;
    while(i<n1 && j<n2)
    {
        if(a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++; 
        }
        else
        {
            arr[k] = b[j]; 
            k++; 
            j++;
        }
    }
    
    while(i<n1)
    {
        arr[k] = a[i];
        k++; 
        i++; 
    }

    while(j<n2)
    {
        arr[k] = b[j];
        k++; 
        j++; 
    }
}

void mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid = (l+r) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);
        
        merge(arr, l, mid, r);
    }
}

int main() 
{
    int n; //size of array

    cout << "Enter the size for the array > "; 
    cin >> n;

    int arr[n]; //main array

    cout << "Enter elements into the array > " << endl; 
    for(int i=0; i<n;i++)
    {
        cin >> arr[i]; 
    }

    cout << "Array before sorting > "; 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t"; 
    }
    cout << endl; 

    cout << "Array after sorting > ";
    mergesort(arr, 0, n);
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t"; 
    }
}