#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    int arr[n];
    int key;
    cout<<"enter elemets of array"<<endl;
   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter key difference"<<endl;
    cin>>key;
    int c=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(abs(arr[i]-arr[j])==key)
            {
                c++;
            }
        }
    }
    cout<<"Key difference pairs present are "<<c<<endl;
    return 0;
}