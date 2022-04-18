
/* c. Write a c++ program find the sum of the following series :-
1^3+2^3+3^3+......+n^3  */
#include<iostream>
using namespace std;
int main()

{
    int n,i,sum=0;
    cout<<"Enter the number of series:";
    cin>>n;
    cout<<"The sum of the series are:";
    for (i=1;i<=n;i++)
    {
        sum=sum+i*i*i;
        cout<<i<<endl;
    }
    cout<<sum;
    return 0;
}


