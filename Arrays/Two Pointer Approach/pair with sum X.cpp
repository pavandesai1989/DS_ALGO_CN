/*
Given a sorted array A (sorted in ascending order), having N integers, find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.
*/

#include<iostream>
using namespace std;


bool PairWithGivenSum(int arr[], int n, int sum)
{
	int i = 0;
	int j = n - 1;

	while (i < j)
	{
		if (arr[i] + arr[j] == sum)
			return true;
		else if (arr[i] + arr[j] > sum)
			j--;
		else
			i++;
	}

	return false;
}


int main()
{
	int arr[] = {10,20,35,50,75,80};
	int size = sizeof(arr) / sizeof(int);

	cout << PairWithGivenSum(arr, size, 70) << endl;

	return 0;
}
