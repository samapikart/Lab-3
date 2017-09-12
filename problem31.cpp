#include <iostream>
 +#include <cmath>
  using namespace std;
  
  /*Program to count number of digits in any number.*/
 @@ -7,14 +8,9 @@ int main()
    int num=0;
    int dig=0;
    cout<<"PROGRAM TO CALCULATE NUMBER OF DIGITS IN THE GIVEN NUMBER";
 -  cout<<"\n \nEnter the number(WHOLE NUMBER): ";
 +  cout<<"\n \nEnter the number(INTEGER): ";
    cin>>num;
 -  int num1=num;
 -  if(num<0)
 -  {
 -    cout<<"\n \nTHIS IS NOT A WHOLE NUMBER !  !  !";
 -    return 0;
 -  }
 +  int num1=abs(num);
    while(num1>0)
    {
