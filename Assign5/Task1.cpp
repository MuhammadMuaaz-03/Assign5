#include<iostream>
#include"Task1.h"
using namespace std;
int main()
{
	Counter C1(5), C2(10);
	cout << "Initial value of C1=" << C1.showData() << endl;
	cout << "Initial value of C2=" << C2.showData() << endl;
	C1++;
	C2++;
	C2++;
	cout << "Value after incrementing in C1=" << C1.showData() << endl;
	cout << "Value after incrementing in C2=" << C2.showData() << endl;

}