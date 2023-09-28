#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            cout<<" ";
        }
        int m=1;
         for(j=0;j<2*i+1;j++)
         {
            if(i==0||i==n-1)
            {
                if(j%2==0)
                {
                    cout<<m;
                    m=m+1;
                }
                else
                    {
                        cout<<" "; }
            }
                        
                    
                    else   
                    {
                        if(j==0){
                        cout<<1;
                        }
                        else if(j==2*i+1-1)
                        {
                            cout<<i+1;
                        }
                        else
                        {
                            cout<<" ";
                        }
                    }
            }
         
               cout<<endl;
    }

}