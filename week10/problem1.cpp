#include <bits/stdc++.h>
using namespace std;
void printMaxActivities(int s[], int f[], int n)
{
    int i, j;
  
    cout <<"Following activities are selected "<< endl;
    i = 0;
    cout <<" "<< i;
    for (j = 1; j < n; j++)
    {
      if (s[j] >= f[i])
      {
          cout <<" " << j;
          i = j;
      }
    }
}
int main()
{
    int n;
    cin>>n;
    int s[n], f[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>f[i];
    }
    
    int n = sizeof(s)/sizeof(s[0]);
    printMaxActivities(s, f, n);
    return 0;
}