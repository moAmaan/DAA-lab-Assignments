#include<iostream>
#include<algorithm>
using namespace std;





int knapsack(int w,int a[],int b[],int n)
{
    struct knap
    {
        int name;
        int benifit;
        int weight;
        double bpw;
    };
    typedef struct knap knap;
   knap item[n];
   for(int i=0;i<n;i++)
   {
       item[i].name=1;
       item[i].benifit=a[i];
       item[i].weight=b[i];
       item[i].bpw=(float)(a[i]/b[i]);
   }
    int x=0;

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(item[i].bpw<item[j].bpw)
            {
                swap(item[j],item[i]);
            }
        }
    }
    double total=0.0;
   while(w!=0)
   {
       if(item[x].weight<=w)
       {
           total+=item[x].benifit;
           w-=item[x].weight;
       }
       else
       {
           total+=(w*item[x].bpw);
           w=0;
       }
       x++;
   }

  return total;


}




int main()
{
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int a[n];
    int b[n];
    cout<<"enetr elements of benifits"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter elements of weights"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>b[i];
    }
    cout<<"give bagsize"<<endl;
    int w;
    cin>>w;
    double ans=knapsack(w,a,b,n);

    cout<<"maximum benifit is : "<<ans;
    return 0;
}