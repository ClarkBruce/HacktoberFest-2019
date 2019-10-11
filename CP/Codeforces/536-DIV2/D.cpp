
#include <bits/stdc++.h>
using namespace std;

vector<int> visited(100002);
vector<int> adjList[100002];
vector<int> res;
set<int> ss;

int bfs(int v, int n)
{
    if(visited[v] == 0)
    {
        visited[v] = 1;
    }
    if(ss.empty())
    {
        return 1;
    }
    for(int i=0;i<adjList[v].size();i++)
    {
        if(visited[adjList[v][i]] == 0)
            ss.insert(adjList[v][i]);
    }
    ss.erase(v);
    cout << v << " ";
    bfs(*ss.begin(),n);
    return 1;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   cout.tie(0);

  int n,m; cin >> n >> m;
    for(int i=0;i<m;i++)
    {
        int u,v; cin >> u >> v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
    for(int i=1;i<=n;i++)
    {
        visited[i] = 0;
    }
    ss.insert(1);
    bfs(1,n);
    for(int i=0;i<res.size();i++)
    {
        cout << res[i] << " ";
    }
    cout << endl;
    return 0;

}
