#include<iostream>
using namespace std;
int sumofeven(int n)
{
    int sum =0;
    for(int i=2;i<=n;i=i+2)
    {
        sum =sum+i;
    }
    return sum;
}
 int main()
 {
     int n;
     cout<<"enter the even  no-:";
     cin>>n;
     int evenresult = sumofeven(n);
     cout<<evenresult;
     return 0;
 }