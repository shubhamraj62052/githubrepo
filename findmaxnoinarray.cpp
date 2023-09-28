#include<iostream>
#include<limits.h>
using namespace std;
int main()
{
    int arr[]={1,4,5,79,56,34,2,8,12};
    int size = 9;
    int maxi =INT_MIN;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }
       cout<<maxi;
}