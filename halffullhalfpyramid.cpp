#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the numb";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
        for(j=0;j<2*i+1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<n-i;j++)
        {
            cout<<"*";
        }
         cout<<endl;
    }
      for(i=0;i<n;i++)
      {
        for(j=0;j<i+1;j++)
        {
            cout<<"*";
        }
         for(j=0;j<2*n-2*i-1;j++)
         {
            cout<<" ";
         }
          for(j=0;j<i+1;j++)
          {
            cout<<"*";
          }
          cout<<endl;
      }
    
}