#include<bits/stdc++.h>
using namespace std;

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;
    vector<vector<pair<int, int>>> graph(vertex);
    for(int i = 0; i < edge; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        graph[u].push_back(make_pair(v, w));
        graph[v].push_back(make_pair(u, w));
    }
    for(int i = 0; i < vertex; i++)
    {
        for(int j = 0; j < graph[i].size(); j++)
        {
            cout << "(" << graph[i][j].first << ", " << graph[i][j].second << ") ";
        }
        cout << endl;
    }
    return 0;
}
