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

int main()
{
    //size of array
    int n;
    cin >> n;

    //input elements into the array 
    vi a(n);
    rep(i,0,n)
    {
        cin >> a[i];
    }

    map<int, int> cnt;

    int prefSum = 0;

    rep(i,0,n)
    {
        prefSum += a[i];
        cnt[prefSum]++;
    }

    int ans = 0;

    map<int, int> :: iterator it; //creating an iterator of the map 

    for(it = cnt.begin(); it!=cnt.end(); it++)
    {
        int c = it->ss;

        ans += (c*(c-1))/2;

        if(it->ff == 0)
        {
            ans += it->ss;
        }
    }

    cout << ans << endl;
    return 0;
}
//v139