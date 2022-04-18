#include<iostream>
#include<conio.h>
using namespace std;
class MobileUser
{
    public:
    virtual void SendMessage()=0;
};
class Rahim :public MobileUser
{
public:
    void SendMessage()
    {
    cout <<"Hi,This is Rahim."<<endl;
    }
};
class Karim:public MobileUser
{
public:
   void SendMessage()
    {
    cout <<"Hi,This is Karim."<<endl;
    }
};
int main()
{
    MobileUser *m;
    Rahim r;
    m=&r;
    m->SendMessage();
    Karim k;
    m=&k;
    m->SendMessage();
    getch();
}
