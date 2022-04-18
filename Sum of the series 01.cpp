
/* a. Write a c++ program find the sum of the following series :-
1+2+3+......+n  */
#include<iostream>
using namespace std;
int main()

{
    int n,i,sum=0;
    cout<<"Enter the number of series:";
    cin>>n;
    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        //cout<<i<<endl;
    }
    cout<<"The sum of the series are:"<<sum;

    return 0;
}
