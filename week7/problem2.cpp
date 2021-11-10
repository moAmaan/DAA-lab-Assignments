#include<bits/stdc++.h>
using namespace std;
// given a directed weighted graph, find the shortest path from source to destination with exaclty k nodes in between
int  findPath(int graph[][100],int source,int destination,int k)
{
    int dist[100];
    bool visited[100];
    for(int i=0;i<100;i++)
    {
        dist[i]=INT_MAX;
        visited[i]=false;
    }
    dist[source]=0;
    for(int i=0;i<100;i++)
    {
        int min=INT_MAX;
        int u;
        for(int j=0;j<100;j++)
        {
            if(!visited[j] && dist[j]<min)
            {
                min=dist[j];
                u=j;
            }
        }
        visited[u]=true;
        for(int j=0;j<100;j++)
        {
            if(!visited[j] && graph[u][j] && dist[u]+graph[u][j]<dist[j])
            {
                dist[j]=dist[u]+graph[u][j];
            }
        }
    }
    return dist[destination];
}
int main()
{
    int graph[100][100];
    int source,destination,k;
    cin>>source>>destination>>k;
    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            cin>>graph[i][j];
        }
    }
    cout<<findPath(graph,source,destination,k);
    return 0;
}