#include<iostream>
using namespace std;
int main()
{
    int n,i,j,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
         for(j=0;j<i+1;j++)
         {
            cout<<i+j+1;
         }
           m=2*i;
         for(j=0;j<i;j++)
         {
            cout<<m;
            m=m-1;
         }
         cout<<endl;
    }
}