#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"enter size of two arrays : "<<endl;
    cin>>n>>m;
    int a[n];
    int b[m];
    cout<<"enter elements of first array in sorted manner"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements of second array in sorted manner"<<endl;
    for(int i=0;i<m;i++)
    {
        cin>>b[i];
    }
    int i=0;
    int j=0;
    while(i<n&&j<m)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
            i++;
            j++;
        }
        else if(a[i]<b[j])
        {
            i++;
        }
        else 
        {
            j++;
        }
    }
    while(j<m)
    {
        if(a[i]==b[j]);
        cout<<b[j]<<" ";
        j++;
    }
    while(i<n)
    {
        if(a[i]==b[j])
        {
            cout<<a[i]<<" ";
        }
        i++;
    }
    return 0;

}