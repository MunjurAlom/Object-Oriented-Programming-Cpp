
// Fibonacci Series
#include <iostream>
using namespace std;
int main()
{
   int n,i,first=0,second=1,next;
   cout <<"Enter the number of Fibonacci series:";
   cin >>n;
   cout << "First %d Trims of the Fibonacci series are: ",&n;
   for (i=0;i<n;i++)
   {
     if (i<=1)
         next=i;
      else
      {
         next = first+second;
         first = second;
         second = next;
      }
      cout<<next<<endl;
   }
   return 0;
}
