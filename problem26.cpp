+#include <iostream>
 +using namespace std;
 +
 +/*Program to print even numbers from 1 to 100*/
 +int main()
 +{
 +  int i=1;
 +  cout<<"Program to print even numbers from 1 to 100";
 +  cout<<"\nThe even numbers from 1 to 100 are: ";
 +  while(i<=100)
 +  {
 +    if(i%2==0)
 +    cout<<"\n"<<i;
 +    i++;
 +  }
 +  return 0;
 +}
