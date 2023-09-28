// #include<iostream>
// using namespace std;
// int main()
// {
//     int  b;
//     cout<<"enter the value of b-:";
//     cin>>b;
//     switch(b)
//     { 
//         case 1: cout<<"har har mahadev";
//         break;
//         case 2: cout<<"Jai shree Ram";
//          break;
//          case 3: cout<<"jai Bajrang Bali Hanuman";
//          break;
//          case 4: cout<<" Jai Mata Di";
//          break;
//          default : cout<<"Jai Mahakal";
//          break;
         
//     }
// }


//printing name program with use of function
#include<iostream>
using namespace std;
char show(int b)
{ 
    switch(b)
    {
     case 1: cout<<"har har mahadev";
         break;
       case 2: cout<<"Jai shree Ram";
          break;
          case 3: cout<<"jai Bajrang Bali Hanuman";
          break;
          case 4: cout<<" Jai Mata Di";
          break;
          default : cout<<"Jai Mahakal";
         break;
    }
}
   int main()
   { int b;
    cin>>b;
    char shubha=show(b);
    cout<<shubha;
   }