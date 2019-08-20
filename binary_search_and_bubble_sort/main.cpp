#include"header.h"

int main()
{
	int array[5];
	int n = sizeof(array) / sizeof(int);
	int element;
	cout << "enter the elements of array:" << endl;
	for (int i = 0; i <= n - 1; i++)
	{
		cin>>array[i];
	}

	bubble_sort(array,n);
	cout << "elements of array in sorted order" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << array[i] << endl;
	}

	cout << "enter the element to search in binary search" << endl;
	cin >> element;
	binary_search(array,n,element);

	cin.get();
}