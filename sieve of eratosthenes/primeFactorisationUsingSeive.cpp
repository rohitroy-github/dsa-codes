// To calculate all the prime factors for a givne number 

#include<iostream>

using namespace std; 

void primeFactor(int n)
{
    //initiate
    int spf[100] = {0};

    for(int i=2;i<=n;i++)
    {
        spf[i] = i; 
    }

    for(int i=2;i<=n;i++)
    {
        if(spf[i] == i)
        //if there exists a prime factor same as the number
        {
            for(int j=(i*i); j<=n; j=j+i)
            {
                if(spf[j] == j)
                {
                    spf[j] = i; 
                    //turning it into the smallest prime number
                }
            }
        }
    }

    while(n!=1)
    {
        cout << spf[n]<<" "; 
        n = n/spf[n];
    }
}

int main() 
{
    int n; 
    cout << "Number ? "; 
    cin >> n;  
    
    primeFactor(n); 

    return 0; 
}