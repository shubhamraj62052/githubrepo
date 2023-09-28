#include<iostream>
 
using namespace std;
 
int main()
{
    int i,j;
    cout<<"Enter any integer :";
    cin>>i;
    for(j=2;j<=i/2;++j)
    {
        if(i%j==0){
            cout<<"Not a prime number";
            break;
        }
    }
    if(j==i/2+1)
    {
        cout<<"prime number";
    }
return 0;
}