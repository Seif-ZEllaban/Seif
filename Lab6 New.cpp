#include <iostream>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}
void main (){
    //first question variables.
    int x, y;
    int count = 0;
    int run1 = 1;
    //second question viarables.
    float num = 10;
    int last = 10;
    int run2 = 1;

    //first question solution:
    do
    {
        do 
        {
            count = 0;
            cout << endl;
            cout << "Enter first integers (x < y): ";
            cin >> x;
            cout << "Enter second integers (x < y): ";
            cin >> y;
        } while (x >= y);

        for (int i = x; i <= y; i++) {
            if (isPrime(i)) {
                count++;
            }
        }

        cout << "The number of primes between " << x << " and " << y << " is: " << count << endl ;
        cout << "Run again? (1 for yes, 0 for no): ";
        cin >> run1;
    } while (run1 == 1);
     
    // second question solution:
    do
    {
        cout << endl;
        for (num = 0; num <= 10; num++) {
            cout << "Times Table for " << num << " is: " << endl;
            for (int i = 0; i <= last; i++) {
                cout << i << ". " << num << " x " << i << " = " << num * i << endl;
            }
        }
        cout << "Run again? (1 for yes, 0 for no): ";
        cin >> run2;
    } while (run2 == 1);
    system("pause");
}
