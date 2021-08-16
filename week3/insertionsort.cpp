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
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    int s=0;
    int c=0;
    for(int i=1;i<n;i++)
    {
        int key=a[i];
        int j=i-1;

        while(j>=0&&a[j]>key)
        {
            a[j+1]=a[j];
            j--;
            s++;
            c++;
        }
       if(a[j+1]!=key)
       {
        a[j+1]=key;
        s++;
       }
       c++;
    }
     cout<<"\narray after sorting "<<endl;
      for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\nNumber of comparisons = "<<(c-1)<<endl;
    cout<<"Number of shifts = "<<s<<endl;

    return 0;
}