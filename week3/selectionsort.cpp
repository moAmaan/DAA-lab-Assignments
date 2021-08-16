#include<iostream>
using namespace std;
int main()
{
     int n;
    cout<<"give size of array"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"array before sorting "<<endl;
    for(int i=0;i<n-1;i++)
    {
        cout<<a[i]<<" ";
    }
    int s=0;
    int c=0;
    int min=0;
    for(int i=0;i<n-1;i++)
    {
        min=i;
        for(int j=i+1;j<n;j++)
        {
            c++;
        if(a[j]<a[min])
        {
            min=j;
           
        }
       
        }
       
        swap(a[i],a[min]);
        s++;
      
    }
    cout<<"\nArray after sorting "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nNumber of comparison = "<<c<<endl;
    cout<<"Number of swaps = "<<s<<endl;
    return 0;
}