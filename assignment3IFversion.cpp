#include <iostream>
using namespace std;

int main(){
    cout << "ANSWER OF AT LAB ASSIGNMENT no.2:" << "\n";
    int order;
    cout << "Which sandwich you would like to have:" << "\n" << "1- Spicy Crispy Chicken Sandwich." << "\n" << "2- Big Mac." << "\n" << "3- Chicken McNuggets." << "\n";
    cin >> order;
    if (order==1)
            cout << "The price for Spicy Crispy Chicken Sandwich is LE69.";
       else if (order==2)
            cout << "The price for Big Mac is LE80.";
        else if (order==3)
            cout << "The price for Chicken McNuggets is LE12 a piece.";
      else
        cout << "Please enter a valid choise. \n";  
        cout << "\n" << "\n";
    system("pause");    
    return 0;
}
