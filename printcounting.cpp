#include<iostream>
using namespace std;
void printnum(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
 int main()
 {
    int n,i;
    cout<<"enter the number";
    cin>>n;
    printnum(n);
 }