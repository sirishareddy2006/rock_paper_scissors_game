#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int user_choice, computer_choice;
    srand(time(0));
    cout << "Rock Paper Scissors Game\n";
    cout << "1. Rock\n";
    cout << "2. Paper\n";
    cout << "3. Scissors\n";

    cout << "Enter your choice: ";
    cin >> user_choice;

    computer_choice = rand() % 3 + 1;

    if (computer_choice == 1)
        cout << "Computer chose Rock\n";
    else if (computer_choice == 2)
        cout << "Computer chose Paper\n";
    else
        cout << "Computer chose Scissors\n";

    if (user_choice == computer_choice)
        cout << "It's a Draw!\n";

    else if ((user_choice == 1 && computer_choice == 3) ||
             (user_choice == 2 && computer_choice == 1) ||
             (user_choice == 3 && computer_choice == 2))
        cout << "You Win!\n";

    else
        cout << "Computer Wins!\n";

    return 0;
}
