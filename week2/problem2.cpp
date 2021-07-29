#include<iostream>
using namespace std;



int main()
{
    int n;
    cout<<"enter size of array "<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elemets of array"<<endl;
    bool flag=false;
    int a,b,c;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]+arr[j]==arr[j+1])
            {
                flag=true;
                a=i;
                b=j;
                c=j+1;
                break;
            }
        }
        if(flag==true)
        {
            break;
        }
    }
    cout<<arr[a]<<"+"<<arr[b]<<"="<<arr[c];
    return 0;
}