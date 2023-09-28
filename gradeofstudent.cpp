#include<iostream>
using namespace std;
char grade(int marks)
{
 if(marks>=90)
 {
    return 'A';
 }
 else if(marks>=80)
 {
    return 'B';
 }
  else if(marks>=60)
  {
    return 'C';
  }
    else if(marks>=40)
    {
        return 'D';
    }
     else 
         return 'F';

}
   int main()
   {
      int marks;
    cout<<"enter the marks";
    cin>>marks;
    char getmarks = grade(marks);
    cout<<getmarks;
    return 0;
   }
   




