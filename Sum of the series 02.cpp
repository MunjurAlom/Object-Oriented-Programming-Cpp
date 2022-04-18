

/* a. Write a c++ program find the sum of the following series :-
1^2+2^2+3^2+......+n^2  */

#include<iostream>
using namespace std;
int main()

{
    int n,i,sum=0;
    cout<<"Enter the number of series:";
    cin>>n;
    cout<<"The number of elements:";
    for (i=1;i<=n;i++)
    {
        sum=sum+i*i;
        cout<<i<<endl;
    }
    cout<<"The sum of the series are:"<<sum;
    return 0;
}

