#include<iostream>
using namespace std;
class Str
{
private:
	string a;
public:
	Str();
	void setStr(string);
	Str operator+(Str);
	string getStr();
};
Str::Str() : a("") {}
void Str::setStr(string n)
{
	a = n;
}
string Str::getStr()
{
	return a;
}
Str Str::operator+(Str temp1)
{
	Str temp2;
	temp2.a = (a + " " + temp1.a);
	return temp2;
}
