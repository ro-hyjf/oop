#include <iostream>
#include<cmath>
#include<ctime>
#include<stdlib.h>
#include<vector>
#include<algorithm>
using namespace std;
class character
{
private:
  string name;
  int health;
  int level;
public:
character()
{int h;int l;string n;
  cout<<"Enter health,level and name: ";
  cin>>h>>l>>n;
  health=h;level=l;name=n;
}
void takeDamage(int amount)
{
   health-=amount;
  if(health<0)
  {
    health=0;
    
}
}
void levelup()
{
 level++;
}
void getstatues()
{
   cout<<"your name is:"<<name<<"\n";
  cout<<"your level is:"<<level<<"\n";
  cout<<"your health is:"<<health<<"\n"; 
}
};
int main()
{
  character obj;
  int a;
  cout<<"Enter amount ";
  cin>>a;
  obj.takeDamage(a);
  obj.levelup();
  obj.getstatues();
    
    return 0;
}
