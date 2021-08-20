#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l,int r){
    int i=l-1;
    int pivot=a[r];
    for(int j=l;j<r;j++){
        if(a[j]<pivot){
            i++;
            swap(a[i],a[j]);
    
        }
    }
    swap(a[i+1],a[r]);
    return i+1;
}

int quicksort(int a[], int l, int r,int k){
    if(l<r){
        int pi=partition(a,l,r);
        if(k<pi)
        {
           quicksort(a,l,pi-1,k);
        }
       else 
       {
           k=((r+1)-k);
        quicksort(a,pi+1,r,k);
       }
       if(pi==k)
       {
           return a[pi-1];
       }
    }
    return -1;
}

int main()
{
    int n,l,r,i;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    l=0;
    r=n-1;
    cout<<"enter elements"<<endl;
    for( i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter kth smallest aur largest index"<<endl;
    int k;
    cin>>k;
    int ans=quicksort(a,l,r,k);
    cout<<ans<<endl;
return 0;
}