#include<iostream>
using namespace std;
int main()
{
    int n,i,j=0;
    cout<<"Enter the number:";
    cin>>n;
    for (i=2;i<=n;i++)
    {
        if (n%i==0)
            j++;

    }
        if (j==1)
        cout<<n<<" is prime."<<endl;
        else
        cout<<n<<" is not prime."<<endl;

    return 0;
}
