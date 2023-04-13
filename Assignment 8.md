## Lab 7 [[Comp 104]]: Arrays.
#Assignment 

###### Question 1: Correct the errors in the following C++ codes:
a)
```cpp
~float A[10], B[10]; 
for(int i=0; i<=10; i++) 
~cin>>A[i]>>B[i];
```
b)
```cpp
int B[3][] = {3, 4,8, 6, 10}; 
float K[4] = {4, 3, 9, 10, 8}; 
double B[2][2] = {(2,3), (1,4)}; 
int n = 10; 
~cout << S[n];
```
c)
```cpp
~float A[]=[5, 6, 9, 4]; 
for(int i=0; i<4; i++) 
~cout << A[i] * A[i]
```
---
###### Question 2: Write a C++ program:
```cpp
#include <iostream>
#include <array>
using namespace std;

void main() 
{
	//Decalration
	array<int, 10> nums;
	float sum = 0;
	float avg = 0;
	float evenSum = 0;
	float evenCount = 0;
	float evenAvg = 0;
	float oddProd = 1;
	float arrayMin;
	float arrayMax;

	//Array Filling
	for (int i = 0; i < nums.size(); i++)
	{
		cout << "Enter number no." << i+1 << ": ";
		cin >> nums[i];
		sum += nums[i];
		if ((nums[i] % 2) == 0)
		{
			evenSum += nums[i];
			evenCount++;
		}
		else
			oddProd *= nums[i];
	}

	//Calculations
	avg = sum / nums.size();
	evenAvg = evenSum / evenCount;
	arrayMin = nums[0];
	arrayMax = nums[0];

	//Find maximum and minimum in all array elements.
	for (int j = 1; j < nums.size(); j++)
	{
		//If current element is greater than max
		if (nums[j] > arrayMax)
			arrayMax = nums[j];

		//If current element is smaller than min
		if (nums[j] < arrayMin)
			arrayMin = nums[j];
	}


	//Outputs
	cout << "Sum = " << sum << endl;
	cout << "Average = " << avg << endl;
	cout << "Average of Even Numbers = " << evenAvg << endl;
	cout << "Product of Odd Numbers = " << oddProd << endl;
	cout << "Difference between Max and Min = " << arrayMax - arrayMin << endl;
}
```
---
###### Question 3: Write a C++ program:
```cpp

```
---
###### Question 4: Write a C++ program that reads a two dimensional array M of size (3 × 3):
```cpp
#include <iostream>
using namespace std;

void main()
{
    int M[3][3];
    int sum = 0;
    int rowSum[3] = { 0, 0, 0 };
    int maxDiagonal = 0;

    //Inputing the matrix
    cout << "Enter the 3x3 Matrix M: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> M[i][j];
        }
    }

    //Calcutating the sum of all elements in M
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            sum += M[i][j];
        }
    }
    cout << "Sum of all elements in M: " << sum << endl;

    //Calcutating the sum of elements in each row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += M[i][j];
        }
        cout << "Sum of elements in row " << i + 1 << ": " << rowSum[i] << endl;
    }

    //Finding the largest element in the diagonal
    for (int i = 0; i < 3; i++) {
        if (M[i][i] > maxDiagonal) {
            maxDiagonal = M[i][i];
        }
    }
    cout << "Largest element in the diagonal: " << maxDiagonal << endl;

    //Calcutlating the transpose of M
    int MT[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            MT[j][i] = M[i][j];
        }
    }

    //Outputing the transpose of M
    cout << "Transpose of M:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << MT[i][j] << " ";
        }
        cout << endl;
    }
}
```
---
###### Question 5:
```cpp

```
---
###### Question 6: Trace:
a)
```cpp
int A[] = {20, 13, 5, 8, 6, 7}; // Initialize the array A with 6 elements
int sum = 0; // Initialize the variable sum to 0
for (int i = 0; i < 6; i++) { // Iterate over the elements of A
    if (A[i] % 5 == 0) { // If the element is divisible by 5
        sum += A[i] * A[i]; // Add the square of the element to sum
    } else if (A[i] % 3 == 0) { // If the element is divisible by 3
        sum += A[i] / 3; // Add the element divided by 3 to sum
    } else if (A[i] % 2 == 0) { // If the element is divisible by 2
        sum -= A[i]; // Subtract the element from sum
    }
}
cout << "sum = " << sum << endl; // Print out the value of sum
```

When we run this program, we should see the output:

```cpp
sum = 224
```
---
b)
```cpp
int A[] = {2, 1, 3, 0, 5, 4}; // Initialize the array A with 6 elements
int B[] = {5, 9, 10, 15, 20, 9}; // Initialize the array B with 6 elements
int sum = 0; // Initialize the variable sum to 0
for (int i = 1; i < 6; i++) { // Iterate over the elements of A starting from index 1
    sum += B[A[i]] - B[A[i-1]]; // Calculate the difference between B[A[i]] and B[A[i-1]], and add it to sum
}
cout << "sum = " << sum << endl; // Print out the value of sum
```

When we run this program, we should see the output:

```cpp
sum = -6
```
---
