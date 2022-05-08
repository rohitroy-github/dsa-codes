//To calculate all the prime numbers within 1 to a given range. 
//using Seieve Of Eratosthenes

#include<iostream>

using namespace std; 

void primeSieve(int n)
{
    //initiate all elements as unmarked
    int prime[100] = {0}; 

    for(int i=2;i<n;i++)
    {
        if(prime[i] == 0)
        //unmarked
        {
            for(int j=(i*i); j<=n; j=j+i)
            //elemnts before i*i are all marked
            {
                prime[j] = 1; 
                //marked
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i] == 0)
        //printing all the unmarked numbers -> prime  numbers
        {
            cout << i << " "; 
        }
    }
    cout << endl;
}

int main() 
{
    int n; 
    cout << "Range ? "; 
    cin >> n;  
    
    primeSieve(n); 

    return 0; 
}