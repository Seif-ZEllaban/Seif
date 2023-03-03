#include <iostream>
using namespace std;

int main(){
    //first at home task.
    cout << "ANSWER OF AT HOME ASSIGNMENT no.1:" << "\n";
    cout << "1.  The value of j1 is 2 because 2*i = 200 and 200/3 equals 66 with a remainder of 2, and 66%4 equals 2." << "\n";
    cout << "2.  The value of j2 is also 2.0 for the same reason as j1, but the result is stored as a float." << "\n";
    cout << "3.  The value of j3 is 0 because 2.4 * i = 240.0 and 240.0 / 3 = 80.0, which has a remainder of 0 when divided by 4." << "\n";
    cout << "4.  The value of j4 is also 0.0 for the same reason as j3, but the result is stored as a float." << "\n";
    cout << "\n" << "\n";
    //second at home task.
    cout << "ANSWER OF AT HOME ASSIGNMENT no.2:" << "\n";
    cout << "1.  At comment no.4 there is a logic error due to a syntax error as it will do give out the average but it will:" << "\n" << ">first: divide n2 by 2." << "\n" << ">second: add the product of n2/2 to n1." << "\n";
    cout << "2.  At comment no.6 there is a runtime error due to a mathematical error where the program is told to divide by zero in which is not possible therefor it will provide an error." << "\n";
    cout << "3.  All other lines are error free" << "\n";
    cout << "\n" << "\n";
    //third at home task.
    int a=3, b=2, c=-4,y;
    y = a + --b + ++c * a % c ;
    y = 2 * ++b + 3 * ( a-- - c ) ;
    y += a * ++b + c-- * a % c ;
    y *= 4* b + 3 * ( ++a + c ) ;
    cout << "ANSWER OF AT HOME ASSIGNMENT no.3:" << "\n";
    cout << "The value of Y is equal to: " << y << "\n";
    cout << "\n" << "\n";
    
    //first at lab assignment.
    cout << "ANSWER OF AT LAB ASSIGNMENT no.1:" << "\n";
    for (int z=1; z >=6; ++z){
        switch (z){
            case 1: {
            int i=3, j=5, k=7;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
                }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
            }
            break;

            case 2: {
            int i=3, j=7, k=5;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
              }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
            }
            break;

            case 3: {
            int i=5, j=3, k=7;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
                }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
            }
            break;
            
            case 4: {
            int i=5, j=7, k=3;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
                }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
            }
            break;

            case 5: {
            int i=7, j=3, k=5;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
              }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
              }
            break;
            
            case 6: {
            int i=7, j=5, k=3;
            if (i < j) {
             if (j < k)
              i = j;
              else
              j = k;
              }
              else {
                if (j > k)
                j = i;
                else
                i = k;
                }
                cout << "i = " << i << " j = " << j << " k = " << k << "\n";
            }
            break;
        }
            
    }
            
        

    //terminal work.
    system("pause");
    return 0;
}
