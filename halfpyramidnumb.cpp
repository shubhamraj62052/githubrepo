#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<j+1;
        }
          cout<<endl;
    }
}