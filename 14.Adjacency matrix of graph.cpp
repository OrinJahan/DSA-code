#include<iostream>
using namespace std;

int main()
{
    int vertex, edge;
    cin >> vertex >> edge;

    int graph[vertex][vertex];

    for(int i = 0; i < vertex; i++)
    {
        for(int j = 0; j < vertex; j++)
        {
            graph[i][j] = 0;
        }
    }
    for(int i = 0; i < edge; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1;
    }
    for(int i = 0; i < vertex; i++)
    {
        for(int j = 0; j < vertex; j++)
        {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }
    return 0;
}
