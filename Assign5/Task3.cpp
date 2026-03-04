#include<iostream>
using namespace std;
#include"Task3.h"
int main()
{
	string a,b;
	cout << "Enter the first string: ";
	cin >> a;
	cout << "Enter the second string: ";
	cin >> b;
	cout << endl;
	cout << "\nInitial strings: " << endl;
	cout << "String: " << a << endl;
	cout << "String: " << b << endl << endl;
	Str s1, s2 , S;
	s1.setStr(a);
	s2.setStr(b);
	S = s1 + s2;
	cout << "\nAfter concetenation: " << endl;
	cout << "String: "<<S.getStr()<<endl;

}