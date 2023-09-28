#include <iostream>
#include<vector>
using namespace std;
int findunique(vector<int>arr)
{
    int ans=0;
    //output
    for(int i=0;i<arr.size();i++)
    {
        ans = ans^arr[i];
        
    }
       return ans;
}

int main()
{ 
    int n;
    cout<<"enter the size of an array"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element"<<endl;
    //taking input
    for(int i=0;i<arr.size();i++)
    {
        cin>>arr[i];
    }
      int uniquElement = findunique(arr);
      cout<<"the unique element is "<<uniquElement<<endl;
    
    
    return 0;
}
