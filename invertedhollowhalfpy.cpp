#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=1;j<=n-i;j++)
        {
            if(j==1||i==0||j==n-i)
            {
              cout<<i+j<<" ";
                
            }
             else{
                   cout<<"  ";
             }
        }
        cout<<endl;
    }
}