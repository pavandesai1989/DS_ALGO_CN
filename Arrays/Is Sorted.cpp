#include<iostream>
using namespace std;


bool IsSorted(int arr[], int s)
{
	for (int i = 0; i < s-1; i++)
	{
		if (arr[i + 1] < arr[i])
			return false;
	}

	return true;
}


int main()
{

	int arr[] = { 1,2,3,4,1,7 };
	int size = sizeof(arr) / sizeof(int);

	if(IsSorted(arr,size))
		cout<<"sorted "<<endl;
	else
		cout<<"unsorted"<<endl;


	return 0;
}
