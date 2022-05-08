//To find the GCD of 2 numbers using the Euclid's Algorithm 
//Example > 42 24 
// 42 % 24 = 18 
// 24 % 18 = 6
// 18 % 6 = 0 
// GCD > 6  

#include<iostream>

using namespace std; 

void euclidAlgorithmForGCD(int a, int b)
{
    while(b != 0)
    {
        int rem = a % b; 

        //swaping 
        a = b; 
        b = rem; 
    }
    
    cout << "GCD > " << a << endl;
}

int main() 
{
    int a, b;
    cin >> a >> b; 
    euclidAlgorithmForGCD(a, b);

    return 0;
}