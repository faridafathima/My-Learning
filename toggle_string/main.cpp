#include<iostream>
#include<string>
using namespace std;

int main()
{
	char array[20];
	cin >> array;
	int n = 0;
	for (int i = 0; array[i] != '\0'; i++)
	{
		n++;
		cout << "number of elements:" << n << endl;
	}

	for (int i = 0; i<strlen(array); i++)
	{
		if (array[i] >= 'A' && array[i] <= 'Z')
		{
			array[i] = array[i] + 32;
			cout << array[i];
		}
		else
		{
			if (array[i] >= 'a' && array[i] <= 'z')
			{
				array[i] = array[i] - 32;
				cout << array[i];
			}
		}
	}
	cin.get();
}