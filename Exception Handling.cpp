// Exception Handling
#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
    try
    {
        int num1,num2;
        cout <<"Enter the 1st number:";
        cin >>num1;
        cout <<"Enter the 2nd number:";
        cin >>num2;

    if (num2==0)
    {
        throw -1;
    }
    double result= (double)num1/num2;
    cout <<"Result:"<<result<<endl;
    }
    catch(int x)
    {
      cout <<"Divided by zero is not possible."<<endl;
      cout <<"Please try again."<<endl;
    }
    getch();
}
