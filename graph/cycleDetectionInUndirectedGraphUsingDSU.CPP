//Cycle Detection in Undirected Graph using DSU

#include<bits/stdc++.h>
#include<vector>
using namespace std; 

const int N = 100; 
vector<int> parent(N); 
vector<int> sz(N); 

void makeSet(int v)
{
    parent[v] = v;
    //initially parent/ leader for all elements in the set is the element itself
    sz[v] = 1; 
    //size there is only 1 element in the list initally > the size of the set is 1
}

int findSet(int v)
{
    if(v == parent[v])
    {
        return v; 
    }
    else
    {
        return parent[v] = findSet(parent[v]); 
    }
}

void unionSet(int a, int b)
{
    a = findSet(a); 
    b = findSet(b); 

//if parents/ leaders are similar, so they belong to the same set
if(a != b)
{
    //Selecting smaller set to decrease time complexity
    if(sz[a] > sz[b])
    {
        swap(a, b); 
    }
    //path compression
    parent[b] = a; 
    sz[a] = sz[a] + sz[b]; 
} 
}

int main() 
{ 
    int n,m; 
    cin >> n >> m; 
    vector<vector<int>> edges; 
 
    for(int i=0;i<m;i++)
    {
        int u, v; 
        cin >> u >> v; 
        edges.push_back({u, v});
    }

    //flag variable 
    bool cycle = false;
    for(auto i : edges)
    {
        int u = i[0]; 
        int v = i[1]; 
        int x = findSet(u); 
        int y = findSet(v); 
        //if parents are same then they are in the same set so cycle exists
        if(x == y)
        {
            cycle = true; 
        }
        else
        {
            unionSet(u, v); 
        }
    }

    if(cycle)
    {
        cout << "Cycle is present" << endl; 
    }
    else
    {
        cout << "Cycle is not present" << endl; 
    }

    return 0; 
}
