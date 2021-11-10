#include<bits/stdc++.h>
using namespace std;
// find shortest path using floyd warshall algorithm
int main()
{
    int n,i,j,k,w;
    cout<<"Enter the number of vertices: ";
    cin>>n;
    int graph[n][n];
    cout<<"Enter the adjacency matrix: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>graph[i][j];
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(graph[i][k]+graph[k][j]<graph[i][j])
                {
                    graph[i][j]=graph[i][k]+graph[k][j];
                }
            }
        }
    }
    cout<<"The shortest path matrix is: "<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}   