#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"enter the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        { if(j==0||j==2*i)
            {
                cout<<"*";
            }
            else
                cout<<" ";
        
        }
         cout<<endl;
        
    }

     for(i=0;i<n;i++)
     {
        for(j=0;j<i;j++)
        {
            cout<<" ";
        }
         for(j=0;j<2*n-2*i-1;j++)
         {
            if(j==0||j==2*n-2*i-2)
            {
               cout<<"*";
            }
            else 
             cout<<" ";
            
            
         }
         cout<<endl;
           
    
    }
       
}