#include<iostream>
using namespace std;
int main()
{
    int n,j,i;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            cout<<i+1;
            if(j!=i)
            {
                cout<<"*";
            }
        }
        cout<<endl;

    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            cout<<n-i;
            if(j!=n-i-1)
            {
                cout<<"*";
            }
        }
        cout<<endl;

    }
}