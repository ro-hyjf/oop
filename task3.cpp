#include <iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
class patient
{
private:
  string name;
  string medically;
  string password;
  int age;
public:
patient()
{

  cout<<"Enter password,age and name: ";
  cin>>ws;
  getline(cin,password);
  cin>>age;
  cin.ignore();
  getline(cin,name);
medically= "";
}
void addhistory(const string &entery)
{
  if(!medically.empty())
medically+=", ";
medically+=entery;
}
string gethestory(const string &p)
{
   if(p==password)
   {
    if(!medically.empty())
    return medically;
    else
    return "empty";
   }
   else return"invalid password";
  }
string getinfo()
{
  return "name "+name+"  age  "+to_string(age);
}
};
int main()
{
patient obj;
obj.addhistory("flu in 2015");
obj.addhistory("leg brokean in2020");
cout<<obj.getinfo()<<"\n";
string p;
cout<<"enter your password ";
getline(cin,p);
cout<<"hitory is: "<<obj.gethestory(p);
    return 0;
}
