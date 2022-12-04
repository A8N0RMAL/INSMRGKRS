#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void ins(int arr[], int n) {
	int k, j;
	for (size_t i = 1; i < n; i++)
	{
		k = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > k)
		{
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = k;
	}
}
void prt(int arr[], int n) {
	cout << "{ ";
	for (size_t i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}\n";
}
int main() {
	/*int arr[] = { 435,5476,475,6845,4567,25,623,46,2 };
	int n = sizeof(arr) / sizeof(arr[0]);*/
	int n;
	cin >> n;
	int arr[n];
	for (size_t i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	ins(arr, n);
	prt(arr, n);
}