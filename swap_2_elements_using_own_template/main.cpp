#include<iostream>
using namespace std;

template <class X,class Y>
void swap_fun(X a, Y b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;

	cout << "value of a and b is:" <<a<<","<<b<< endl;
}

int main()
{
	int a;
	long b;
	cout << "enter 2 elements to swap" << endl;
	cin >> a;
	cin >> b;
	swap_fun<int>(a,b);
}