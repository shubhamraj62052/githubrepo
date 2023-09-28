#include<iostream>
using namespace std;
int main()
{
    int i,j,n,p,m;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
           int m=j+1;
            char ch= m+'A'-1;
            
            cout<<ch;
        }
    
        for(j=i;j>=1;j--)
        { 
            int p=j;
            char ch= p+'A'-1;
            cout<<ch;
            
        }
        cout<<endl;
    }
        
    
}