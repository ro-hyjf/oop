#include <iostream>
#include <vector>
#include <algorithm>
#include<string>
#define ll long long
#define en endl
using namespace std;
class math
{
private:
	static int num1;
	static int num2;
public:
	static int add(int n,int x)
	{
		num1 = n; num2 = x;
		int sum =num1+num2;
		return sum;
	}

};
int math::num1;
int math::num2;
int main()
{
	int n, x;
	cout << "Enter two numbers: ";
	cin >> n >> x;
	cout << "Your sum is: ";
	cout << math::add(n,x);
	
   return 0;
}
