
 +#include <iostream>
 +using namespace std;
 +
 +/*Program to determine whether a character is alphabet or not.*/
 +
 +int main()
 +{
 +  char ch='0';
 +  cout<<"Program to determine whether a character is alphabet or not.";
 +  cout<<"\n \nEnter the character ";
 +  cin>>ch;
 +  if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
 +    cout<<"\n \nThe character is an alphabet";
 +  else 
 +    cout<<"\n \nThe character is not an alphabet";
 +  return 0;
 +}
