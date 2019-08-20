#include"header.h"

void bubble_sort(int array[], int size)
{
	int temp = 0;
	int i = 0, j = 1;
	int k = 1;
	for (i = 0; i < size; i++)
	{
		for (j=k; j <size;j++)
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		k++;
	}
}

void binary_search(int array[], int n,int search)
{
	int mid;
	int low = 0;
	int high = n - 1;

	while (low <= high)
	{
		mid = (low + high) / 2;
		cout << "mid is:" << mid << endl;
		if (search == array[mid])
		{
			cout << "element is found at position:" << mid << endl;
			break;
		}
		else if (search > array[mid])
		{
			low = mid + 1;
			cout << "low is" << low << endl;
		}
		else
		{
			high = mid - 1;
			cout << "high is" << high << endl;
		}

		if (low > high)
		{
			cout << "element is not found" << endl;
		}
	}
}
