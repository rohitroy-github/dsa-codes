#include <stdio.h> 
#include <iostream>
#include <string.h>
using namespace std; 

int main() 
{
    cout << "Enter a string to encrypt > "; 
    string a;
    cin >> a; 

    string encryptedString = ""; 

    for(int i=0; i<a.lenght(); i++)
    {
        char character = a[i]; 
        int ascicode = (int)character; 

        encryptedString = encryptedString + (char)ascicode; 
    }

    cout << "The encrpted text is > " << encryptedString; 

    return 0; 
}