#include<iostream>
using namespace std;
bool find(int arr[],int size,int n){
 for(int i=0;i<size;i++)
{
    if(arr[i] ==n)
    {
        return true; }
    
}
   return false;
}
int main()
{ int n;
    int arr[5]={1,3,5,7,8};
    int size=5;
    cout<<"enter the desire number";
    cin>>n;
    if(find(arr,size,n))
    {
        cout<<"found"<<endl;
    }
     else
     {
         cout<<"not found"<<endl;
     }
    
}