#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "Sum: " << num1 + num2 << std::endl;
    cout << "Difference: " << num1 - num2 << std::endl;
    cout << "Product: " << num1 * num2 << std::endl;
    cout << "Quotient: " << num1 / num2 << std::endl;
    cout << "Remainder: " << int(num1) % int(num2) << std::endl;
    system("pause");
    return 0;
}
