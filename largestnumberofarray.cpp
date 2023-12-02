// C program to find maximum in arr[] of size n
#include <stdio.h>

// Function to find maximum in arr[] of size n
int largest(int arr[], int n)
{
	int i;

	// Initialize maximum element
	int max = arr[0];

	// Traverse array elements from second and
	// compare every element with current max
	for (i = 1; i < n; i++)
		if (arr[i] > max)
			max = arr[i];

	return max;
}

// Driver code
int main()
{
	int arr[] = { 10, 324, 45, 90, 988 };
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function call
	printf("Largest in given array is %d", largest(arr, n));
	return 0;
}

#include <iostream>
using namespace std;

int main() {

  int i, n;
  float arr[100];

  cout << "Enter total number of elements(1 to 100): ";
  cin >> n;
  cout << endl;

  // Store number entered by the user
  for(i = 0; i < n; ++i) {
    cout << "Enter Number " << i + 1 << " : ";
    cin >> arr[i];
  }

  // Loop to store largest number to arr[0]
  for(i = 1;i < n; ++i) {

    // Change < to > if you want to find the smallest element
    if(arr[0] < arr[i])
      arr[0] = arr[i];
  }

  cout << endl << "Largest element = " << arr[0];

  return 0;
}
