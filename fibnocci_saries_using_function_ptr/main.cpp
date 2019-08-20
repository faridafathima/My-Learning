#include<iostream>
#include<map>
#include "main.h"
using namespace std;

typedef int (*fun)(int, map<int,int>);

int fib1(int n, map<int, int> m1)
{
	if (n <  2) 
	{
		m1.insert(n, n);
		return n;
	}
	auto itr = m1.find(n);
	if (itr != m1.end())
	{
		return itr->second;
	}
	else
	{
		int res= fib1(n - 1,m1) + fib1(n - 2,m1);
		m1.insert(n, res);
	}
}


