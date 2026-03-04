#include<iostream>
using namespace std;
class Counter
{
private:
	int count;
public:
	Counter();
	Counter(int x);
	Counter operator++(int);
	int showData();
};
Counter::Counter() : count(0) {}
Counter::Counter(int x) : count(x) {}
Counter Counter ::operator++(int)
{
	count++;
	return count;
}
int Counter::showData()
{
	return count;
}
