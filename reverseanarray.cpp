#include<iostream>
using namespace std;
int main()
{
    int arr[8] = {10,20,30,40,50,60,70,80};
    int size = 8;
    int i=0;
    int j= size-1;
    while(i<j)
    {
        swap(arr[i],arr[j]);
        i++;
        j--;
    } 
    
    
     for(i=0;i<size;i++)
     {
       cout<<arr[i];
      
     }
}