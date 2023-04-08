#include <iostream>
using namespace std;
//Lab no.6 answer sheet.
void main() {
    //second question viarables.
    float num = 10;
    int last = 10;
    int run2 = 1;

    // second question solution:
    for (num = 0; num <= 10; num++) {
        for (int i = 0; i <= last; i++) {
            cout << num * i << "   ";
        }
        cout << endl;
    }
    system("pause");
}
