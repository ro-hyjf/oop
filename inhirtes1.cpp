#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#define ll long long
#define en endl
using namespace std;
class shape
{
public:
	void diplay()
	{
		cout << "Iam ashape.\n";
	}
};
class circle :public  shape
{
private:
	double redious;
public:
	circle()
	{
		double r;
		cout << "Enter a redious: ";
		cin >> r;
		redious = r;
	}
	double area()
	{
		double area = pow(redious, 2) * 3.14;
		return area;
	}
};
class rectangle :public shape
{
private:
	double hight; double width;
public:
	rectangle()
	{
		double l, w;
		cout << "Enter hight and width: ";
		cin >> l >> w;
		hight = l; width = w;
	}

	double parameter()
	{
		double param = (hight+width) * 2;
		return param;
	}
};

int main()
{
	circle c;
	c.diplay();
	cout << "Circle area is: ";
	cout << c.area()<<en;
	rectangle rec;
	rec.diplay();
	cout << "Rectangle parameter is: ";
	cout << rec.parameter()<<en;
   return 0;
}
