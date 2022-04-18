// Parameterized Constructor??
#include<iostream>
#include<conio.h>
using namespace std;
class student
{
public:
    int id;
    double gpa;
    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
};
int main()
{
    student selim(1105,3.5);
    selim.display();
    student biplob (1106,3.9);
    biplob.display();
}
