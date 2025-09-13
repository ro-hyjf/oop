#include <iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
class book
{
private:
  string title;
  string auther;
  int price;
public:
book()
{
  int p;string a;string t;
  cout<<"Enter auther,price and title: ";
  cin>>ws;
  getline(cin,a);
  cin>>p;
  cin>>ws;
  getline(cin,t);
auther=a;title=t;
if(p>0)
{
  price=p;
}
else price=0;
}
void setprice(int p)
{
  if(p>0)
  price=p;
  else
  cout<<"invalid price:";
}
void gettitle()
{
    cout<<"book title is "<< title<<"\n";
}
void getauther()
{
    cout<<"book auther is "<< auther<<"\n";
}
void getprice()
{
  cout<<"book price is "<<price<<"\n";
}
};
int main()
{
book obj;
obj.getauther();
obj.getprice();
obj.gettitle();

obj.setprice(50);

obj.getauther();
obj.getprice();
obj.gettitle();
    return 0;
}
