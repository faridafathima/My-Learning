#include<iostream>
#include<string>
#include<stack>
#include<math.h>
using namespace std;

void postfix(string array)
{
	stack<char> s1;
	char first;
	char second;
    char res;
	int size_array = array.size();
	cout << "number of elements is:" << size_array << endl;
	for (int i = 0; i <= size_array - 1; i++)
	{ 
		if (isdigit(array[i]))
		{
			s1.push(array[i]);
		}
		else
		{
			first = s1.top();
			cout << "first value of stack is:" << s1.top() << endl;
			s1.pop();
			second = s1.top();
			s1.pop();
			cout << "first is :" << first << "second is:" << second << endl;
			first = first - '0';
			second = second - '0';
			if ((array[i] == '+' )|| (array[i] == '-') || (array[i] == '*')|| (array[i] == '/') || (array[i] == '%'))
			{
				if (array[i] == '+')
				{
					res = first + second;
					res = res + '0';
					cout << "res is:" << res << endl;
					s1.push(res);
				}
				else if (array[i] == '-')
				{
					res = first - second;
					res = res + '0';
					cout << "res is:" << res << endl;
					s1.push(res);
				}
				else if (array[i] == '*')
				{
					res = first * second;
					cout << "res is:" << res << endl;
					res = res + '0';
					s1.push(res);
					cout << "top value of stack:" << s1.top()<<endl;
				}
				else if (array[i] == '/')
				{
					res = first / second;
					cout << "res is:" << res << endl;
					s1.push(res);
				}
				else if (array[i] == '%')
				{
					res = first % second;
					res = res + '0';
					cout << "res is:" << res << endl;


					s1.push(res);
				}
			}
		}
	}
	cout << "result is:" << res << endl;
}

int main()
{

	string array = "231*+9-";
//	cout << "enter the postfix exprerssion" << endl;
//	cin >> array;
	cout << array << endl;
	postfix(array);
	cin.get();
}