#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Give your string : "<<endl;
    cin>>str;
    int count=0;
    char ans;
    int max=0;
    int freq[128];
    for(int i=0;i<128;i++)
    {
        freq[i]=0;
    }
    for(int i=0;i<str.length();i++)
    {
        char c=str[i];
        freq[(int)c]++;
    }
    for(int i=0;i<128;i++)
    {
       
        if(freq[i]!=0)
        {
           if(freq[i]>max)
           {
               max=freq[i];
               ans=(char)i;
           }
        }
    }


 


    cout<<"character is: "<<ans<<" Occurence is : "<<max<<endl;




    return 0;
}