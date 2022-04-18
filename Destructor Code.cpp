#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class test
{
public:
    test()
    {
        count++;
        cout<<count<<"Constructor Created"<<endl;
    }
    ~test()
    {
        cout <<count<<"Destory"<<endl;
        count--;
    }
};
int main()
{
    cout <<"Inside main block"<<endl;
    cout <<"Create 1st object"<<endl;
    test t1;
    {
        cout <<"inside block 1"<<endl;
        cout <<"Creating two more object"<<endl;
        test t2,t3;
        cout <<"Leaving block 1"<<endl;
    }
    cout <<"Inside the main block"<<endl;
    getch();
}
