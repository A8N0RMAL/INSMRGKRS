#include <iostream>
using namespace std;
void merge(int arr[], int l, int mid, int r) {
	int n1 = mid - l + 1;
	int n2 = r - mid;

	int a[n1];
	int b[n2];

	for (int i = 0; i < n1; i++)
	{
		a[i] = arr[l + i];
	}
	for (int i = 0; i < n2; i++)
	{
		b[i] = arr[mid + i + 1];
	}
	int i = 0, j = 0, k = l;
	while (i < n1 && j < n2)
	{
		if (a[i] < b[j]) {
			arr[k] = a[i];
			k++, j++;
		}
		else
		{
			arr[k] = b[j];
			k++, j++;
		}
	}
	while (i < n1)
	{
		arr[k] = a[i];
		k++, i++;
	}
	while (j < n2)
	{
		arr[k] = b[j];
		k++, j++;
	}
}
void msort(int arr[], int l, int r) {
	if (l < r) {
		int mid = (l + r) / 2;
		msort(arr, l, mid);
		msort(arr, mid + 1, r);
		merge(arr, l, mid, r);
	}
}
void prt(int arr[], int n) {
	cout << "{ ";
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "}\n";
}
int main() {
	int n;
	cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	msort(arr, 0, n-1);
	prt(arr, n);
	return 0;
}