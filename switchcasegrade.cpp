#include<iostream>
using namespace std;
char getmarks(int marks)

{
  // int marks;
  //   cin>>marks;
  switch(marks/10)
    { 
      case 10:
      case 9:
        
          return'A';
          // break;
        
      case 8:
        
          return'B';
          //  break;
        
      case 7:
        
          return'C';
        // break;
        
      case 6:
        
         return'D';
        // break;
        default :
         return'f';
          
       
      }
    }
 int main()
{
  int marks;
  cout<<"enter the no";
  cin>>marks;
  char getgrade =getmarks(marks);
  cout<<getgrade;
  return 0;
}
