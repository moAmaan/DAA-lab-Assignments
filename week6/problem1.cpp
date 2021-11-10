#include<bits/stdc++.h>
using namespace std;



void add(vector<int> adj[],int a,int b)
{
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void printG(vector<int> adj[],int v)
{
    for(int i=0;i<v;i++)
    {
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }
        cout<<"\n";
    }
}

bool findpath(vector<int> adj[],int v,int s,int d)
{
    bool visited[v+1];
    for(int i=0;i<v;i++)
    {
        visited[i]=false;
    }
    queue<int> q;
    q.push(s);
    visited[s]=true;
    while(q.empty()==false)
    {
        int u=q.front();
        q.pop();
        if(u==d)
        {
            return true;
        }
        for(auto v: adj[u])
        {
            if(visited[v]==false)
            {
                visited[v]=true;
                q.push(v);
            }
        }
    }
    return false;

}


int main()
{
    
    int v;
    cout<<"no of vertices"<<endl;
    cin>>v;
    vector<int> adj[v];
    cout<<"enter elements"<<endl;
    for(int i=0;i<v;i++)
    {
            int a,b;
            cin>>a>>b;
            add(adj,a,b);
        
    }
    cout<<"Give source ans destination"<<endl;
    int s,d;
    cin>>s>>d;
   
     findpath(adj,v,s,d) ? cout << "Yes Path Exists" : cout << "No Such Path Exists";

    
   
    return 0;
}