#include<iostream>
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
