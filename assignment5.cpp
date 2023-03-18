#include <iostream>
using namespace std;
int main() {
    int n, sum = 0;
    cout << "Enter a six-digit integer: ";
    cin >> n;
    sum += n / 100000;
    sum += n / 10000 % 10;
    sum += n / 1000 % 10;
    sum += n / 100 % 10;
    sum += n / 10 % 10;
    sum += n % 10;
    cout << "The sum of the digits is: " << sum << endl;
	system("pause");
    return 0;
}
