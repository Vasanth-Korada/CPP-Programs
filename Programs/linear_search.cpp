#include <iostream>
using namespace std;
int main()
{
	int i, n, key;
	int a[1000] = {0};

	cout << "Enter the size of the array:" << endl;
	cin >> n;
	cout << "Enter the elements of the array:" << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	cout << "Enter the key to search:"<<endl;
	cin >> key;

	for (i = 0; i <= n - 1; i++)
	{
		if (a[i] == key)
		{
			cout << "Found at index:" << i << endl;
			break;
		}
	}
	if (i == n)
	{
		cout << "Element not Found" << endl;
	}
}