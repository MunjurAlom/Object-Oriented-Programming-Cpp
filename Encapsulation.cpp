#include <iostream>
using namespace std;
class student
{
public:
    int id;
    string name;
    void display()
    {
        cout <<id<<endl;
        cout <<name<<endl;
    }
};
int main()
{
    student s1;
    s1.id=101;
    s1.name="KYAU.edu.bd";
    s1.display();
    return 0;
}
