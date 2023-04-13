## Lab 7 [[Comp 104]]: Arrays.
#Assignment 

###### Question 1: Correct the errors in the following C++ codes:
a)
```c++
~float A[10], B[10]; 
for(int i=0; i<=10; i++) 
~cin>>A[i]>>B[i];
```
b)
```c++
int B[3][] = {3, 4,8, 6, 10}; 
float K[4] = {4, 3, 9, 10, 8}; 
double B[2][2] = {(2,3), (1,4)}; 
int n = 10; 
~cout << S[n];
```
c)
```c++
~float A[]=[5, 6, 9, 4]; 
for(int i=0; i<4; i++) 
~cout << A[i] * A[i]
```
---
###### Question 2: Write a C++ program:
```c++
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
```

```