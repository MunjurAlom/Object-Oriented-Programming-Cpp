#include<iostream>
using namespace std;
int main()
{
    int a,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
    cout <<"The address of a :"<<ptr1<<endl;
    cout <<"The address of ptr1 :"<<ptr2<<endl;
    ptr1+=2;
    cout <<"The address of a :"<<ptr1<<endl;
    cout <<"The address of ptr1 :"<<ptr2<<endl;
    return 0;

}
