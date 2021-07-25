#include<iostream>
using namespace std;

int binary(int a[],int n,int key)
{
    int l=0;
    int h=n-1;
   
    int c=0;
    while(l<h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]==key)
        {
            c++;
            h=mid-1;
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
     l=0;
     h=n-1;
     while(l<h)
    {
        int mid=l+(h-l)/2;
        if(a[mid]==key)
        {
            c++;
            l=mid+1;
        }
        else if(a[mid]>key)
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return c;
}



int main()
{
    int t,n,key;
    cout<<"give test cases no. ";
    cin>>t;
    while(t>0)
    {
        cout<<"\ngive size of array ";
        cin>>n;
        int a[n];
        cout<<"\ngive elements of array ";
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cout<<"\ngive key to be searched ";
        cin>>key;
        int count = binary(a,n,key);
        if(count>0)
        {
            cout<<key<<"-"<<count;
        }
        else
        {
            cout<<"Key not present";
        }
        t--;

    }
    return 0;
}