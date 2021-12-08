#include<iostream>
using namespace std;


int GetSecondLargest(int arr[], int s)
{
	int res = -1;
	int largest = 0;

	for (int i = 1; i < s; i++)
	{
		if (arr[i] > arr[largest])
		{
			res = largest;
			largest = i;
		}
		else if (arr[i] != arr[largest])
		{
			if (res == -1 || (arr[i] > arr[res]))
				res = i;
		}
	}

	return res;
}


int main()
{

	int arr[] = { 1,5,3,20,-200,11111,74,2,3, };
	int size = sizeof(arr) / sizeof(int);

	cout << "max ele index is " << GetSecondLargest(arr, size) << " and ele is " << arr[GetSecondLargest(arr, size)] << endl;
	return 0;
}
