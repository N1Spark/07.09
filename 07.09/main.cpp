#include<iostream>

using namespace std;
 
class Point
{
	int x;
	int y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	void Print()
	{
		cout << x << "\t" << endl;
	}
};

class Person
{
	string name;
	int age;
public:
	Person()
	{

	}
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
	void Print()
	{
		cout << name << "\t" << age << endl;
	}
};

int main()
{
	Person obj1;
	Point obj2;
	int mas[5]{ 1,2,3,4,5 };
}