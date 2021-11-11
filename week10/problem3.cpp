#include<bits/stdc++.h>
using namespace std;
int majority(int arr[], int n)
{
    int count = 1, maj_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[maj_index] == arr[i])
            count++;
        else
            count--;
        if (count == 0)
        {
            maj_index = i;
            count = 1;
        }
    }
    return arr[maj_index];
}
int main(){
    int N;
    cout<<"Enter the size of the array: ";
    cin>>N;
    int arr[N];
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The majority element is " << majority(arr, n);
    return 0;
}