#include<iostream>
#include"Task2.h"
using namespace std;
int main()
{
	int x, y,z;
	cout << "Enter first number: ";
	cin >> x;
	cout << "Enter secound number:" ;
	cin >> y;
	Overloadcal ob1,ob2;
	ob1.setData(x);
	ob2.setData(y);
	cout << endl << endl;
	cout << "Arthematic Operations:" << endl;
	cout << "1.Addition" << endl;
	cout << "2.Subtraction" << endl;
	cout << "3.Multiplication" << endl;
	cout << "4.Division" << endl;
	cout << "Enter Choice(1-4): ";
	cin >> z;
	cout << endl ;
	if (z==1)
	{
		 Overloadcal obj = ob1 + ob2;

		cout << "Addition of numbers = " << obj.showData()<<endl;
	}
	else if (z == 2)
	{
		Overloadcal obj = ob1 - ob2;

		cout << "Subtraction of numbers = " << obj.showData() << endl;
	}
	else if (z == 3)
	{
		Overloadcal obj = ob1 * ob2;

		cout << "Multiplication of numbers = " << obj.showData()<<endl;
	}
	else if (z == 4)
	{
		Overloadcal obj = ob1 / ob2;

		cout << "Division of numbers = \n\n" << obj.showData()<<endl;
	}
	
	
}