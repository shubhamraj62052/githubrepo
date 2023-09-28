#include <iostream>

using namespace std;
//  void findmissing(int arr[],int n)
// {
//     // visiting method element
//     for(int i=0;i<n;i++){
//     int index= abs(arr[i]);
//     if(arr[index -1]>0)
//     {
//         arr[index -1 ]*= -1;
//     }
//     }
//      for(int i=0;i<n;i++)
//      {
//          if(arr[i]>0)
//          {
//           cout<<i+1<<endl;
//          }
         
// }
// }  

// int main()
// {
//     int n;
//     int arr[]={1,3,3,3,4};
//     for(int i=0;i<n;i++)
//     n= sizeof(arr)/sizeof(int);
//     findmissing(arr,n);
    
//     return 0;
// }
void findmissing(int arr[],int n)
{   int i=0;
    while(i<n)
    {
        int index=arr[i]-1;
        if(arr[i]!=arr[index])
        {
            swap(arr[i],arr[index]);
        }
         else
          i++;
    }
    
     for(int i=0;i<n;i++)
     {
        if(arr[i]!=i+1)
        {
            cout<<i+1;
        }
     }
}

int main()
{
  int n;
  int arr[]={1,3,4,3,3};
  n=sizeof(arr)/sizeof(int);
  findmissing(arr,n);

    return 0;
}