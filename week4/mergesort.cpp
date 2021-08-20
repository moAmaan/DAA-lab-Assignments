#include<iostream>
using namespace std;


void merge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;

    int left[n1];
    int right[n2];

    for(int i=0;i<n1;i++)
    {
        left[i]=arr[l+i];
    }
     for(int i=0;i<n2;i++)
    {
       right[i]=arr[m+1+i];
    }

    int i=0;int j=0;int k=l;
    while(i<n1&&j<n2)
    {
        if(left[i]<right[j])
        {
            arr[k++]=left[i++];
        }
        else
        {
            arr[k++]=right[j++];
        }
    }
    while(i<n1)
    {
        arr[k++]=left[i++];
    }
    while(j<n2)
    {
        arr[k++]=right[j++];
    }



}


void mergesort(int arr[],int l,int r)
{
    if(l<r)
    {
        int m=(r+l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr,l,m,r);
    }
}





int main()
{
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<"Array before sort"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\nArray after sort"<<endl;
    int l=0;
    int r=n-1;
    mergesort(arr,l,r);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}