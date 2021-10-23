// DNF(dutuch national flag) algorithm to sort the array
void printArray(int arr[], int arr_size)
{
	
	for (int i = 0; i < arr_size; i++)
		cout << arr[i] << " ";
}


int main()
{
	int arr[] = { 0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1 };
	int n = sizeof(arr) / sizeof(arr[0]);

	sort012(arr, n);

	cout << "array after segregation ";

	printArray(arr, n);

	return 0;
}
