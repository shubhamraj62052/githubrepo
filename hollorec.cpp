#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<3;i++)
    {
        if(i==0 || i==2)
        {
            for(j=0;j<4;j++)
            {
                cout<<"*";
            }
        }
        else
          {
            cout<<"*";
            for(j=0;j<3;j++)
            {
                cout<<" ";
            }
              cout<<"*";
          }
           cout<<endl;
    }
}