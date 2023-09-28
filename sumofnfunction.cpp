#include<iostream>
using namespace std;
int sumofno(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
      sum = sum+i;
    }
      return sum;
}
  int main()
  {
      int n;
      cout<<"enter the number";
      cin>>n;
     int getsum = sumofno(n);
      cout<<getsum;
      return 0;
  }