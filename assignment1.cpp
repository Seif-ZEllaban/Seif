#include <iostream>
using namespace std;

int main() {
     float num1, num2;
    std::cout << "Please enter two integers: ";
    std::cin >> num1 >> num2;

    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Difference: " << num1 - num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;
    std::cout << "Quotient: " << num1 / num2 << std::endl;
    std::cout << "Remainder: " << int(num1) % int(num2) << std::endl;
    system("pause");
    return 0;
}
