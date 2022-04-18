#include <iostream>
using namespace std;
int main()
{
    int n,reverse=0;
    cout <<"Enter any number:";
    cin >>n;
    cout <<"The reverse number are:";
    while (n!=0)
    {
        reverse=n%10;
        cout <<reverse;
        n=n/10;
    }
    return 0;
}
