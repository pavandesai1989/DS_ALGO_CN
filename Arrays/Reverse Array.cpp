#include<iostream>
using namespace std;


void  reverse(int arr[], int s)
{
	int low = 0;
	int high = s - 1;

	while (low < high)
	{
		int temp = arr[low];
		arr[low] = arr[high];
		arr[high] = temp;
		low++;
		high--;
	}
}


int main()
{

	int arr[] = { 1,2,3,4,5};
	int size = sizeof(arr) / sizeof(int);

	reverse(arr, size);

	for (auto ele : arr)
		cout << ele << " ";

	return 0;
}
