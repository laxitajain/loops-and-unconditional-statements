#include <iostream>
using namespace std;
#include <math.h>
int main()
{ int temp,rev,n1,n;
  cout<<"Enter the number: ";
  cin>>n;
  temp=n;
  rev=0;
  do
    {
    n1=n%10;
    rev=(rev*10)+n1;
    n=n/10;
    }while(n!=0);
    if (rev==temp)
    { cout<<"It's a Palindrome.";
    }
    else
    { cout<<"It's not a Palindrome.";
    }

  return 0;
}
