#include<bits/stdc++.h>
using namespace std;
int minimum_spanning_weight(int **graph,int n,int m)
{
    int *visited=new int[n];
    int *parent=new int[n];
    int *weight=new int[n];
    for(int i=0;i<n;i++)
    {
        visited[i]=0;
        parent[i]=-1;
        weight[i]=INT_MAX;
    }
    visited[0]=1;
    weight[0]=0;
    for(int i=0;i<n-1;i++)
    {
        int min=INT_MAX;
        int u=-1;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==0 && weight[j]<min)
            {
                min=weight[j];
                u=j;
            }
        }
        visited[u]=1;
        for(int j=0;j<n;j++)
        {
            if(visited[j]==0 && graph[u][j]!=0)
            {
                if(weight[j]>graph[u][j])
                {
                    weight[j]=graph[u][j];
                    parent[j]=u;
                }
            }
        }
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=weight[i];
    }
    return sum;
}
int main()
{
    int n,m;
    cin>>n>>m;
    int **graph=new int*[n];
    for(int i=0;i<n;i++)
    {
        graph[i]=new int[n];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            graph[i][j]=0;
        }
    }
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        graph[u][v]=w;
        graph[v][u]=w;
    }
    cout<<minimum_spanning_weight(graph,n,m)<<endl;
    return 0;
}