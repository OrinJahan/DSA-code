#include<bits/stdc++.h>
using namespace std;

struct Edge
{
    int u,v,w;
};
int findparent(int parent[], int i)
{
    if(parent[i]==i)
        return i;
    return findparent(parent, parent[i]);
}
void unionSets(int parent[], int x, int y) {
    int xset = findparent(parent, x);
    int yset = findparent(parent, y);
    parent[xset] = yset;
}
void sortEdge(Edge edges[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(edges[j].w> edges[j+1].w)
            {
                Edge temp=edges[j];
                edges[j]=edges[j+1];
                edges[j+1]=temp;
            }
        }
    }
}
int main()
{
    int V, E;
    cout<<"Enter the number of the vertex and edges:";
    cin>>V>>E;

    Edge edges[E];
    cout<<"enter the value of u,v,w:\n";
    for(int i=0; i<E; i++)
    {
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }
    sortEdge(edges,E);

    int parent[V];
    for(int i=0; i<V; i++){
        parent[i]=i;
    }
    cout<<"Edges in Minimum spanning tree is :";
    int rank=0;
    for(int i=0; i<E && i<V-1; i++)
    {
        int uRep=findparent(parent, edges[i].u);
        int vRep=findparent(parent, edges[i].v);

        if (uRep != vRep) {
            cout << edges[i].u << " - " << edges[i].v << " : " << edges[i].w << endl;
            unionSets(parent, uRep, vRep);
            rank++;
        }
    }
    return 0;
}
