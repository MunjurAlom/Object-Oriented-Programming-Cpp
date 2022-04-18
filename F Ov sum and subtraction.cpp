#include<iostream>
using namespace std;
void print (int i)
{
    cout <<"integer value="<<i<<endl;
}
void print (double f)
{
   cout <<"Float value="<<f<<endl;
}
void print (char const*c)
{
    cout <<"Char data="<<c<<endl;
}




int main ()
{
    print(10);
    print(14.14);
    print("student");
    return 0;
}
