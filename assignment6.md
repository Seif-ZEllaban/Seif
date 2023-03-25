# Assignment 6
##### Q1) Correct.
a)
```
float x=1,sum=0;
while(x!=0){
cin>>x;
sum+=x*x;
}
cout<<"sum="<<sum;
```
b)
```
float x=1,y=0;
do{
  y+=1/x;
  x++;
  } while(1/x > 0.01);
```
c)
```
int sum=0;
for(int k=1, k <10,k++)
 sum+=k*k;
cout<<"sum="<<sum;
```
---
##### Q2) While to For.
a)
```
float  x=1,sum=0, B;
cin>>B;
for(x=1, k<b, x++)
{
sum+=x*x*x;
}
cout<<“sum=”<<sum; 
```
b)
```
int k=1,fact=1, n;
cin>>n;
for(k=1, k<=n. k++)
{
fact*=k;
}
cout<<“fact=”<<fact;
```
c)
```
int k=1,fact=1, n, sum=0;
cin>>n;
for(k=1, k<=n. k++)
{
fact*=k;
if(k%2==0)
    sum+=fact;
}
cout<<“sum=”<<sum;
```
---
##### Q3) Trace
a)
```
Trace:
k=1, fact=1, sum=0  
k=2, fact=2, sum=2  
k=3, fact=6, sum=2  
k=4, fact=24, sum=26  
k=5, fact=120, sum=26

Output:
k=2  
fact=2  
sum=2  
k=4  
fact=24  
sum=26

The code calculates the factorial of the input value n and adds up the factorials of all even numbers between 1 and n. In this case, the factorial of 5 is 120, and the sum of the factorials of even numbers between 1 and 5 is 2 + 24 = 26. Therefore, the final value of sum will be 26.
```
b)
```
Trace:
k=1, fact=1, sum=1  
k=2, fact=2, sum=9  
k=3, fact=6, sum=36

Output:
k=3

The code calculates the factorial of the input value n and the sum of the cubes of all numbers between 1 and n. It then checks if the current value of fact is greater than the current value of sum in each iteration of the while loop. Once fact becomes greater than sum (at k=3), the while loop breaks and the value of k (which is 3) is printed.
Therefore, the final output of the code will be "k=3".
```
c)
```
Trace:
sum=2  
sum=4  
sum=6  
sum=8  
sum=10

Output:
2
4
6
8
10
etc

The code adds up all even numbers starting from 2, and prints the current value of the sum in each iteration of the while loop. Since the condition (k >= 1) is always true, the code will run indefinitely, adding up even numbers and printing the value of sum in each iteration.
Therefore, the output of the code will be an infinite series of even numbers, starting from 2.
```
---
##### Q4) In Lab
---
##### Q5) 
```
#include <iostream>
using namespace std;

int main() {
    int n, i, sign = 1;
    float pi = 0;

    do {
        cout << "Enter the value of n (0 to end): ";
        cin >> n;

        if (n <= 0) {
            break;
        }

        pi = 0;
        sign = 1;

        for (i = 0; i < n; i++) {
            pi += sign * 4.0 / (2 * i + 1);
            sign = -sign;
        }

        cout << "The approximate value of pi using " << n << " terms is: " << pi << endl;
    } while (true);

    return 0;
}
```
---
##### Q6)
a)
```
#include <iostream>
using namespace std;

int main() {
    int n, i;
    float num, sum = 0, average;

    cout << "Enter the value of n: ";
    cin >> n;

    for (i = 1; i <= n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }

    average = sum / n;
    cout << "The average of the " << n << " numbers is: " << average << endl;

    return 0;
}
```
b)
```
#include <iostream>
using namespace std;

int main() {
    int x, y, even_sum = 0, even_count = 0;

    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    if (x > y) {
        cout << "Error: x should be less than or equal to y." << endl;
        return 1;
    }

    for (int i = x; i <= y; i++) {
        if (i % 2 == 0) {
            even_sum += i;
            even_count++;
        }
    }

    if (even_count == 0) {
        cout << "There are no even numbers between " << x << " and " << y << "." << endl;
    } else {
        float even_average = (float) even_sum / even_count;
        cout << "The average of even numbers between " << x << " and " << y << " is: " << even_average << endl;
    }

    return 0;
}
```
c)
```
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n;

    cout << "Enter the value of x: ";
    cin >> x;

    if (x < 0) {
        cout << "invalid value of x" << endl;
        return 1;
    }

    cout << "Enter the value of n: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i / sqrt(x + i);
    }

    cout << "The sum is: " << sum << endl;

    return 0;
}
```
d)
```
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x, n;

    cout << "Enter the value of x: ";
    cin >> x;

    if (x == 0) {
        cout << "Warning: x cannot be 0." << endl;
        return 1;
    }

    cout << "Enter the value of n: ";
    cin >> n;

    if (n <= 0) {
        cout << "Warning: n must be greater than 0." << endl;
        return 1;
    }

    double sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += pow(-1, i - 1) * pow(i, i) / ((n - i + 1) * x);
    }

    cout << "The value of f(x,n) is: " << sum << endl;

    return 0;
}
```
---
##### Q7)
```
#include <iostream>
using namespace std;

int main() {
    int n, x, num, sum = 0, count = 0;
    float avg;

    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of n: ";
    cin >> n;

    while (count < n) {
        cout << "Enter an integer: ";
        cin >> num;
        if (num % x == 0) {
            sum += num;
            count++;
        }
    }

    if (count == 0) {
        cout << "No numbers are divisible by " << x << endl;
    } else {
        avg = (float) sum / count;
        cout << "The sum of numbers divisible by " << x << " is " << sum << endl;
        cout << "The average of numbers divisible by " << x << " is " << avg << endl;
    }

    return 0;
}
```
---
##### Q8)
```
Trace:
i=2, f=2, s=4  
i=4, f=48, s=52

Output:
i=2, f=2, s=4  
i=4, f=48, s=52

The code calculates the factorial of the input value n and adds up the factorials of all even numbers between 1 and n, along with the even numbers themselves. In this case, the factorial of 5 is 120, and the sum of the factorials of even numbers between 1 and 5 (along with the even numbers themselves) is 2 + 2! + 4 + 4! = 2 + 2 + 24 + 48 = 76. Therefore, the final value of s will be 76.
Therefore, the output of the code will be "i=2, f=2, s=4" and "i=4, f=48, s=52".
```
