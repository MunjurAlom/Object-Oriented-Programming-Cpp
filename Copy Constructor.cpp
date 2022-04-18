// Copy Constructor??
#include<iostream>
#include<conio.h>
using namespace std;
class book
{
    int page;
    float price;
public:
    book()
    {

    }
    book(int x,int y)
    {
        page=x;
        price=y;
    }
    book(book &b)
    {
        page=b.page;
        price=b.price;
    }
    void display()
    {
        cout <<"Pages = "<<page<<endl;
        cout <<"Price = "<<price<<endl;
    }
};

int main()
{
  book b1(256,143.50);
  book b2=b1;
  cout<<"Object b1 "<<endl;
  b1.display();
  cout<<"Object b2 "<<endl;
  b2.display();
  getch();
}
