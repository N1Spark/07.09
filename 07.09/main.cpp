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
};

class Student
{
	string name;
	int age;
public:
	Student()
	{

	}
	Student(string n, int a)
	{
		name = n;
		age = a;
	}
};

class Academy
{
	Student* group;
	int count;
public:
	Academy(){}
};

int main()
{

}