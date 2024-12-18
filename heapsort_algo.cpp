#include <iostream>
using namespace std;


void heapify(int arr[], int n, int i)
{
	int l = 2 * i + 1;
	int r = 2 * i + 2;
	int max = i;
	if (l<n && arr[l]>arr[max])
		max = l;
	if (r<n && arr[r]>arr[max])
		max = r;
	if (max != i)
	{
		swap(arr[i], arr[max]);
		heapify(arr, n, max);
	}
}

void heapSort(int arr[], int n)
{

	for (int i = n / 2 - 1; i >= 0; i--)
		heapify(arr, n, i);

	for (int i = n - 1; i >= 0; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}

int main()
{
	int n=10;
	int arr[10] = { 3,7,6,2,9,4,1,5,4,0 };
	heapSort(arr, n);
	cout << "\nSorted Arary Using Heap_Sort Algorithm:\n";
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}


}