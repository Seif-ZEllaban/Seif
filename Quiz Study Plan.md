#### IOStream
```cpp
std :: cout <<
std :: cin >>
```
   - include `<iostream>`
   - using namespace `std` to remove std from every line.
---
#### Variable Data Types
```cpp
int x = 9;
long y = 1000000000000000000000000000000000000000000000;
double z = 100000000000000000000000000000000000000000000000000000000;
float l = 12.43;
string m = "text";
bool n = true;
```
---
#### Operators
```cpp
x + y =
x - y =
x * y =
x / y =
x % y =
```
---
#### Assignment Statements
```cpp
z = (x * y) / 2
```
---
#### Math
```cpp
#include <cmath>  
  
cout << sqrt(64);  
cout << round(2.6);  
cout << log(2);
```
---
#### If Else Statement
```cpp
int time = 22;  
if (time < 10) {  
  cout << "Good morning.";  
} else if (time < 20) {  
  cout << "Good day.";  
} else {  
  cout << "Good evening.";  
}  
// Outputs "Good evening."
```
   - Less than: **a < b**
   - Less than or equal to: **a <= b**
   - Greater than: **a > b**
   - Greater than or equal to: **a >= b**
   - Equal to **a == b**
   - Not Equal to: **a != b**
---
#### Switch Statement
```cpp
switch(_expression_) {  
  case x:  
    // code block  
    break;  
  case y:  
    // code block  
    break;  
  default:  
    // code block  
}
```
---
#### While Loop
```cpp
int i = 0;  
while (i < 5) {  
  cout << i << "\n";  
  i++;  
}
```
---
#### Do While Loop
```cpp
int i = 0;  
do {  
  cout << i << "\n";  
  i++;  
}  
while (i < 5);
```
---
#### For Loop
```cpp
for (int i = 0; i < 5; i++) {  
  cout << i << "\n";  
}
```
---
#### Break
```cpp
for (int i = 0; i < 10; i++) {  
  if (i == 4) {  
    break;  
  }  
  cout << i << "\n";  
}
```
---
#### Arrays
String:
```cpp
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};  
cout << cars[0];  
// Outputs Volvo
```
Numerical:
```cpp
int myNum[3] = {10, 20, 30};
cout << myNum[0]
// Outputs 10
```
Changing A Value:
```cpp
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};  
cars[0] = "Opel";  
cout << cars[0];  
// Now outputs Opel instead of Volvo
```
**For Each Loop:**
```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};  
for (int i : myNumbers) {  
  cout << i << "\n";  
}
```
Getting Number of Element:
```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};  
int getArrayLength = **sizeof(myNumbers) / sizeof(int)**;  
cout << getArrayLength;
```
Matrix:
```cpp
string letters[2][4] = {  
  { "A", "B", "C", "D" },  
  { "E", "F", "G", "H" }  
};
```
Loop Through:
```cpp
string letters[2][4] = {  
  { "A", "B", "C", "D" },  
  { "E", "F", "G", "H" }  
};  
  
for (int i = 0; i < 2; i++) {  
  for (int j = 0; j < 4; j++) {  
    cout << letters[i][j] << "\n";  
  }  
}
```
