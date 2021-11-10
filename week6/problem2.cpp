// C++ program to find out whether a
// given graph is Bipartite or not
#include <iostream>
#include <queue>

using namespace std;
bool isBipartite(int v, int* G[], int src)
{
    int colorArr[v];
    for (int i = 0; i < v; ++i)
        colorArr[i] = -1;

    colorArr[src] = 1;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int u = q.front();
        q.pop();
        if (G[u][u] == 1)
            return false;

        for (int v = 0; v < v; ++v)
        {
            if (G[u][v] && colorArr[v] == -1)
            {
                colorArr[v] = 1 - colorArr[u];
                q.push(v);
            }
            else if (G[u][v] && colorArr[v] == colorArr[u])
                return false;
        }
    }

    return true;
}
int main()
{
    int v;
    cin >> v;
    int G[v][v];
    for (int i = 0; i < v; i++)
        for (int j = 0; j < v; j++)
            G[i][j];

    isBipartite(v, G, 0) ? cout << "Yes" : cout << "No";
    return 0;
}