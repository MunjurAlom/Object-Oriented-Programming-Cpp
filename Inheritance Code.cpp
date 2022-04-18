
#include<iostream>
#include<conio.h>
using namespace std;
class parents
{
public:
    string name;
    int age;
    void display1()
    {
        cout <<"Name is:"<<name<<endl;
        cout <<"Age is:"<<age<<endl;
    }
};
//
class child : public parents
{
public:
    int id;
    void display2()
    {
        cout <<"Name is:"<<name<<endl;
        cout <<"Id is:"<<id<<endl;
        cout <<"Age is:"<<age<<endl;
    }

};
int main()
{
    child obj;
    obj.name="Munjur Alom";
    obj.id=11;
    obj.age=20;
    obj.display2();
    getch();
}
