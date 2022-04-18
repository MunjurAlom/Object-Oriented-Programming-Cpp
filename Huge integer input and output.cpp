#include<iostream>
using namespace std;
int main()
{
    string str;

    int a,b,max,i;
    cin>>str;
    max=str.size();
    int arr[max];
    for(i=0;i!=max;i++)
    {
        arr[i]=(int)str[i]-48;
    }
    for(i=0;i!=max;i++)
    {
        cout<<arr[i];
    }
    return 0;
}
