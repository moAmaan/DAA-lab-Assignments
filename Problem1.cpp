#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter size of array"<<endl;
    cin>>n;
    int arr[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Provide your key to be searched"<<endl;
    cin>>key;
    int c=0;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(key==arr[i])
        {
            cout<<"YES IT IS PRESENT !!!"<<endl;
            flag=true;
            c++;
            break;
        }
        else
        c++;
    }
    if(flag==false)
    {
        cout<<"your key element is not present :("<<endl;
    }
    else
    {

    cout<<"we found your key in "<<c<<" comparisons"<<endl;
    }
    return 0;
}