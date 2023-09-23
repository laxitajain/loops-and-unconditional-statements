#include <iostream>
using namespace std;
int main()
{ int x,x1,p,n,y,n1,z;
  char choice;
  p=0;
  n1=0;
  z=0;
  cout<<"Enter a number: ";
  cin>>x;
  if(x>0)
        p++;
  if(x<0)
        n1++;
  if(x==0)
        z++;
  do
   {cout<<"Do you wish to enter another number?(y/n) ";
   cin>>choice;
   if(choice==toupper('y') || choice=='y')
     {cin>>x1;
     if(x1>0)
        p++;
     if(x1<0)
        n1++;
     if(x1==0)
        z++;
    continue;}
   else
    break;
   } while(1);
   cout<<"The number of positive numbers is: "<<p<<"."<<endl;
   cout<<"The number of negative numbers is: "<<n1<<"."<<endl;
   cout<<"The number of zeroes is: "<<z<<"."<<endl;

   return 0;
}
