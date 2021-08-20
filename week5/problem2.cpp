#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"enter sum : "<<endl;
    int k;
    cin>>k;
    int l=0;
    int h=n-1;
    bool flag=false;
    while(l<h)
    {
        if(arr[l]+arr[h]==k)
        {
            cout<<arr[l]<<" "<<arr[h]<<endl;
            l++;
            flag=true;
        }
        else if(arr[l]+arr[h]>k)
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    if(flag==false)
    {
        cout<<"No matching pair found"<<endl;
    }
    return 0;
}