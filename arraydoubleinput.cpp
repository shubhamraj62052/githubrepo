#include<iostream>
using namespace std;
int main()
{ 
    int n,i;
    int arr[500];
    
    cout<<"how many numbers:- ";
    cin>>n;
    cout<<"enter the numbers:- ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"doubles:-";
     for(i=0;i<n;i++)
     {
        
         cout<<arr[i]*2<<" ";
     }
}