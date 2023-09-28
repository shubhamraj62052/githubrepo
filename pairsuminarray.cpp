#include <iostream>
#include<vector>
#include<limits.h>
using namespace std;

int main()
{
    int sum=80;
  
  vector<int> arr{10,20,30,40,50,60,70};
  for(int i=0;i<arr.size();i++)
  {
      int element =arr[i];
        for(int j=i+1;j<arr.size();j++)
        {
          if(element+arr[j]== sum)
          {
            cout<<"the sum of pair of "<<element<<"and "<<arr[j]<<" is ="<<sum<<endl;
          }
      } 
  } 
      return 0;
}
     //print without taking extra variable(element)
  
//      #include <iostream>
// #include<vector>
// #include<limits.h>
// using namespace std;

// int main()
// {
  
//   vector<int> arr{10,20,30,40,50,60,70};
//   for(int i=0;i<arr.size();i++)
//   {
//       cout<< arr[i]<<"pair with"<<endl;
//         for(int j=i+1;j<arr.size();j++)
//         {
//           cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
//       }
//   } 
  
//     return 0;
// }




