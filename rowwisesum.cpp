#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int rows=3;
    int cols=3;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
          cin>>arr[i][j];
        }
    }
      cout<<"the sum of rowise element is"<<endl;
      for(int i=0;i<rows;i++)
      {    
          int sum=0;
          for(int j=0;j<cols;j++)
          {  sum= sum+arr[i][j];
             
          }
             cout<<sum;
          cout<<endl;
      }
    
}