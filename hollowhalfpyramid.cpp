#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cout<<"entert the";
    cin>>n;
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<i+1;j++)
        {
            if(j==0||i==j||i==n-1)
            {
                cout<<j+1<<" ";
            }
            else{
                cout<<"  ";
            }
            
        }
    cout<<endl;
}
}