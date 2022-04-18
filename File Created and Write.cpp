#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("student.txt");
    file<<"I am munjur Alom. I am 19 years old. I am a student.";
    file.close();
    return 0;
}
