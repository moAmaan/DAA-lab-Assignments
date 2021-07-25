#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;

int jumpS(int a[],int x,int n)
{
    int low=0;
    int jump=sqrt(n);
    int high=jump;
    while(a[int(min(high,n)-1)]<x)
    {
        low=high;
        high+=jump;
        if(low>=n)
        {
          return -1;
        }
    }
  while(a[int(low)]<x)
  {
      low++;
  }
  if(a[int(low)]==x)
  {
      return low;
  }
    return -1;
}


int main()
{
    int n;
    cout<<"give szie of array"<<endl;
    cin>>n;
    int a[n];
    cout<<"enter elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
int key;
cout<<"give your key"<<endl;
cin>>key;
int c=jumpS(a,key,n);

cout<<key<<": found at "<<c<<" comparison"<<endl;
return 0;

}