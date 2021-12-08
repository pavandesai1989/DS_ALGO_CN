
#include<iostream>
using namespace std;

/*
    Return the index of the max element in the array
*/
int getmax(int arr[], int s)
{
	//assume first ele max
	int res = 0;
	for (int i = 1; i < s; i++)
	{
		if (arr[i] > arr[res])
			res = i;
	}
	return res;
}


int main()
{
	int arr[] = {15,8,9,4,125,4,-1,7};
	int size = sizeof(arr) / sizeof(int);

	cout << "max ele index is "<<getmax(arr, size) <<" and ele is "<<arr[getmax(arr,size)]<< endl;
	return 0;
}
