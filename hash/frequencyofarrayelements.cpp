#include<iostream>

using namespace std;

#include<vector>
#include<map>
#include<unordered_map>
#include<stack>
#include<queue>
#include<string>
#include<set>

//define

#define vi vector <int>
#define pii pair <int, int>
#define vii vector <pii>
#define rep(i, a, b) for(int i=a; i<b; i++)
#define ff first
#define ss second

signed int main()
{
    int n, i;
    cin >> n;

    vi a(n);
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    map<int, int> freq;
    rep(i,0,n)
    {
        freq[a[i]]++;
    }

    map<int, int> :: iterator it;

    for(it = freq.begin(); it!=freq.end(); it++)
    {
        cout << it->ff << " " << it->ss << endl;
    }

    return 0;
}

//v137