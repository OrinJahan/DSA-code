#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 4;
    int blocked[4][4] = {0};
    int b = 5;
    int bx[] = {2,1,2,3,2};
    int by[] = {2,3,3,3,1};

    for(int i=0; i<b; i++)
        blocked[bx[i]][by[i]] = 1;

    queue<pair<int,int>> q;
    bool visited[4][4] = {false};
    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};

    q.push({0,0});
    visited[0][0] = true;

    bool found = false;

    while(!q.empty()){
        auto [x,y] = q.front(); q.pop();
        if(x==3 && y==3){
            found = true;
            break;
        }
        for(int i=0;i<4;i++){
            int nx=x+dx[i], ny=y+dy[i];
            if(nx>=0 && ny>=0 && nx<n && ny<n && !blocked[nx][ny] && !visited[nx][ny]){
                visited[nx][ny]=true;
                q.push({nx,ny});
            }
        }
    }

    if(found) cout<<"Yes";
    else cout<<"No";
}

