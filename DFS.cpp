#include <bits/stdc++.h>

using namespace std;

vector<bool>visited(1001,false);

void DFS(int x,vector<vector<int>>list)
{
    visited[x]=true;
    cout<<x<<" ";
    for(int v: list[x])
    {
        if(!visited[v])
        {
            DFS(v,list);
        }
    }
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        int V,E,x;
        cin>>V>>E>>x;
        vector<vector<int>> list(V+1);
        for(int i=0;i<E;i++)
        {
            int u,v;
            cin>>u>>v;
            list[u].push_back(v);
            list[u].push_back(u);

        }

        DFS(x,list);
    }

    return 0;
}
