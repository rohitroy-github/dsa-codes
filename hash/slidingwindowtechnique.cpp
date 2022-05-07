//sliding window problem 
//wap to take an array with size n and find least(sum of k consecutive elemenets) ?
#include<iostream>
#include<limits.h>

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
    int n, k;
    cin >> n >> k;

    vi a(n);

    rep(i,0,n)
    {
        cin >> a[i];
    }

    int s = 0;
    int ans = INT_MAX;

    rep(i,0,k)
    {
        s += a[i];
    }
    
    //check
    cout << s << " ";
    ans = min(ans, s);

    //sliding window

    rep(i, 1, n-k+1)
    {
        s -= a[i-1];
        s += a[i+k-1];
        ans = min(ans, s);

        cout << s << " ";
    }

    cout << endl;
    cout << ans << endl;
    return 0;
}
//v140