#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 8;
    int graph[8][8] = {0};

    graph[0][1] = 6;
    graph[0][2] = 1;
    graph[1][3] = 2;
    graph[2][3] = 2;
    graph[3][5] = 1;
    graph[5][7] = 2;
    graph[6][7] = 1;

    int dist[8];
    for (int i = 0; i < n; i++)
        dist[i] = -1;

    queue<int> q;
    q.push(0);
    dist[0] = 0;

    while (!q.empty()) {
        int u = q.front();
        q.pop();
        for (int v = 0; v < n; v++) {
            if (graph[u][v] > 0 && dist[v] == -1) {
                dist[v] = dist[u] + graph[u][v];
                q.push(v);
            }
            else if (graph[u][v] > 0 && dist[u] + graph[u][v] < dist[v]) {
                dist[v] = dist[u] + graph[u][v];
                q.push(v);
            }
        }
    }
    cout << "Cost to reach node 7 from 0: " << dist[7];
    return 0;
}
