#include<iostream>
#include"Task2"
using namespace std;
class Overloadcal 
{
private:
	int num;
public:
	Overloadcal();
	void setData(int);
	int showData();
	Overloadcal operator+(Overloadcal);
	Overloadcal operator-(Overloadcal);
	Overloadcal operator*(Overloadcal);
	Overloadcal operator/(Overloadcal);
};
Overloadcal::Overloadcal() : num(0) {}
void Overloadcal:: setData(int c)
{
	num = c;
}
int Overloadcal::showData()
{
	return num;
}
Overloadcal Overloadcal:: operator+(Overloadcal n)
{
	Overloadcal d;
	d.num = num + n.num;
	return d;
}
Overloadcal Overloadcal::operator-(Overloadcal n)
{
	Overloadcal d;
	d.num = num - n.num;
	return d;
}
Overloadcal Overloadcal::operator*(Overloadcal n)
{
	Overloadcal d;
	d.num = num * n.num;
	return d;
}
Overloadcal Overloadcal ::operator/(Overloadcal n)
{
	Overloadcal d;
	d.num = num / n.num;
	return d;
}
int main()
{
	int x, y,z;
	cout << "Enter first number: ";
	cin >> x;
	cout << "\nEnter secound number:" ;
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
	if (z==1)
	{
		 Overloadcal obj = ob1 + ob2;

		cout << "Addition of numbers = " << obj.showData();
	}
	else if (z == 2)
	{
		Overloadcal obj = ob1 - ob2;

		cout << "Subtraction of numbers = " << obj.showData();
	}
	else if (z == 3)
	{
		Overloadcal obj = ob1 * ob2;

		cout << "Multiplication of numbers = " << obj.showData();
	}
	else if (z == 4)
	{
		Overloadcal obj = ob1 / ob2;

		cout << "Division of numbers = " << obj.showData();
	}
	
	
}