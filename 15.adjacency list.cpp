#include<iostream>
#include<vector>
using namespace std;

int main() {
    int vertex, edge;
    cin >> vertex >> edge;
    vector<vector<int>> graph(vertex);
    for(int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < graph[i].size(); j++) {
            cout << graph[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
