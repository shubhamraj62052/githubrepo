#include<iostream>
using namespace std;
int add(int a,int b)
{
    //  int result =a+b;
    return a+b;
}
int main()
{
    int a,b,sum;
    cout<<"enter the value of a";
    cin>>a;
    cout<<"enter he value of b";
    cin>>b;
    sum = add(a,b);
     cout<<sum;
     return 0;

}