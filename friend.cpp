#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#include<cmath>
#define ll long long
#define en endl
using namespace std;
class box
{
private:
	double length;
public:
	box()
	{
		double l;
		cout << "Enter your length: ";
		cin >> l;
		length = l;
	}
	friend void printlength(box b);
};
void printlength(box b)
{
	cout << "Your length is: " << b.length << en;
}

int main()
{
	box b;
	printlength(b);
   return 0;
}
