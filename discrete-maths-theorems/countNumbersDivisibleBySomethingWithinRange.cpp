//Count numbers divisible by 5 and 7 within 1 to 1000 

#include<iostream>

using namespace std; 

int countNumbersDivisibleBySomethingWithinRange(int n, int a, int b)
{
    int c1 = n/a; 
    int c2 = n/b;

    int c3 = n/(a*b); 

    return c1 + c2 - c3; 
}

int main()
{
    int n, a, b; 

    cin >> n >> a >> b; 

    cout << countNumbersDivisibleBySomethingWithinRange(n, a, b);
    return 0; 
}