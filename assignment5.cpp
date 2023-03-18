Here's a C++ program that reads a six-digit integer from the user and calculates the sum of its digits using the quotient and remainder operators:

```c++

#include <iostream>

using namespace std;

int main() {

    int n, sum = 0;

    cout << "Enter a six-digit integer: ";

    cin >> n;

    // Extracting digits and adding them to sum

    sum += n / 100000; // Adding first digit

    sum += n / 10000 % 10; // Adding second digit

    sum += n / 1000 % 10; // Adding third digit

    sum += n / 100 % 10; // Adding fourth digit

    sum += n / 10 % 10; // Adding fifth digit

    sum += n % 10; // Adding sixth digit

    cout << "The sum of the digits is: " << sum << endl;

    return 0;

}

```

Explanation:

- The program uses the `iostream` library for input/output operations.

- The `main()` function is the entry point of the program.

- The user is prompted to enter a six-digit integer.

- The `cin` object is used to read the input value into the `n` variable.

- The program extracts each digit from the integer using the quotient and remainder operators.

- The first digit is extracted by dividing `n` by 100000.

- The second digit is extracted by dividing `n` by 10000 and taking the remainder when divided by 10.

- The third digit is extracted by dividing `n` by 1000 and taking the remainder when divided by 10.

- The fourth digit is extracted by dividing `n` by 100 and taking the remainder when divided by 10.

- The fifth digit is extracted by dividing `n` by 10 and taking the remainder when divided by 10.

- The sixth digit is extracted by taking the remainder of `n` when divided by 10.

- The program adds up the digits to calculate their sum and stores it in the `sum` variable.

- The result is printed to the console using the `cout` object.
