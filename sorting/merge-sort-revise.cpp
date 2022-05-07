#include<iostream>
using namespace std; 

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid - l + 1; 
    int n2 = r - mid; 

    //declare temporary arrays 
    int a[n1];
    int b[n2]; 

    for(int i=0; i<n1; i++)
    {
        a[i] = arr[l+i];
    }

    for(int i=0; i<n2; i++)
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
        i++;
        k++;
    }

    while(j<n2)
    {
        arr[k] = b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[], int l, int r)
{
    if(l<r)
    {
        int mid = (l + r)/2; 
        
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);

        merge(arr, l, mid, r);
    }
}

int main()
{
    int n; //number of elements
    cout << "How many elements ? > "; 
    cin >> n;
    int arr[n]; //main array
    cout << "Enter elements into the array > " << endl;
    for(int i=0; i<n; i++)
    {
        cin >> arr[i]; 
    }

    cout << "Array before sorting > "; 
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    
    mergesort(arr, 0, n);

    cout << "Array after sorting > ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << endl;
    return 0;
}