#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

enum Choice { ROCK, PAPER, SCISSORS };
enum Result { WIN, LOSE, TIE };

int main()
{
    srand(time(NULL));

    Choice player1_choice;
    Choice player2_choice;
    Result result;
    int y;

    cout << "Let's play Rock, Paper, Scissors!" << endl;

    do {
        cout << "Player 1: Choose your weapon (0 for rock, 1 for paper, 2 for scissors): ";
        cin >> y;
        player1_choice = (Choice)y;
    } while (player1_choice != ROCK && player1_choice != PAPER && player1_choice != SCISSORS);

    player2_choice = static_cast<Choice>(rand() % 3);

    cout << "Computer chooses: ";

    switch (player2_choice) {
        case ROCK:
            cout << "rock" << endl;
            break;
        case PAPER:
            cout << "paper" << endl;
            break;
        case SCISSORS:
            cout << "scissors" << endl;
            break;
        default:
            break;
    }

    if (player1_choice == player2_choice) {
        result = TIE;
    } else if ((player1_choice == ROCK && player2_choice == SCISSORS) ||
               (player1_choice == PAPER && player2_choice == ROCK) ||
               (player1_choice == SCISSORS && player2_choice == PAPER)) {
        result = WIN;
    } else {
        result = LOSE;
    }

    switch (result) {
        case WIN:
            cout << "Player 1 wins!" << endl;
            break;
        case LOSE:
            cout << "Computer wins!" << endl;
            break;
        case TIE:
            cout << "It's a tie!" << endl;
            break;  
        default:
            break;      
     }

     return 0; 
}
