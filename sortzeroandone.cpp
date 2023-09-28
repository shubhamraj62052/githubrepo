#include <iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> arr{0,1,0,0,1,0,1,1,0};
    int start=0;
    int end=arr.size()-1;
    int i=0;
    while(i!=end)
    {
        if(arr[start]==0)
        {
            swap(arr[i],arr[start]);
            i++;
            start++;
        }
           else
              {
                swap(arr[i],arr[end]);
              end--; }
    }
          for( auto val : arr)
          {
            cout<<val<<" ";
          }
    

    return 0;
}
