#include <iostream>
#include<vector>
using namespace std;

int main()
{ //create a vector method 1
    vector<int> arr;
    int ans = (sizeof(arr)/sizeof(int));
    cout<<ans<<endl;
    cout<<arr.size()<<endl;
    cout<<arr.capacity()<<endl;
    //insert
    arr.push_back(5);
    arr.push_back(7);
    //print an array
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
      //remove an element
      arr.pop_back();
      //print an remove element
      for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
      //creating a vector method 2
      int n;
      cout<<"enter the value of n"<<endl;
      cin>>n;
      //taking input from user
      //vector<int> brr(n)
      //taking input from user and deciding its value
        vector<int> brr(n,-5);
        cout<<"size of brr "<<brr.size()<<endl;
         for(int i=0;i<brr.size();i++)
    {
        cout<<brr[i];
    }
        cout<<endl;
       //creating vector method3
       vector<int> crr{10,20,30,40};
       
         for(int i=0;i<crr.size();i++)
    {
          cout<<crr[i];
    }
      cout<<endl;
       //check empty function
       vector<int> drr;
      { cout<<" drr vector is empty or not"<<drr.empty()<<endl;}
      
      vector<int> err(5);
      cout<<"vector is empty or not"<<err.empty();
    return 0;
}
