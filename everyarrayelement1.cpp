#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int arr[500];
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        arr[i]=1;
        
    } 
      for(i=0;i<n;i++)
      {   
          cout<<arr[i];
      }
}