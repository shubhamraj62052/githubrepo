#include<iostream>
#include<limits.h>
using namespace std;
void transpose(int arr[][3],int row,int col,int transposearr[][3])
{  
    for(int i=0;i<row;i++)
    { 
       
        for(int j=0;j<col;j++)
        {
          transposearr[j][i]= arr[i][j];
        }
     
    }
     
     
}
    void printarray(int arr[][3],int row,int col){
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                cout<<arr[i][j];
            }
        }
    }
int main()
{  int row=3;
int col=3;
    int arr[3][3];
    //taking input rowise
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
        
    }
       
      int transposearr[3][3];
      transpose(arr,row,col,transposearr);
      printarray(transposearr,row,col);
      cout<<endl;
     
     }
      
    