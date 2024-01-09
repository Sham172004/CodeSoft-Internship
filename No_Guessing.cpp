#include <iostream>
#include <cstdlib>  
#include <ctime>    

using namespace std;

int main() {
    
    srand(time(0));

    int secretNumber = rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!\n";
    cout << "Try to guess the secret number between 1 and 100.\n\n";

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;

        if (userGuess == secretNumber) {
            cout << "Congratulations! You guessed the correct number in " << attempts + 1 << " attempts.\n";
        } else if (userGuess < secretNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Too high! Try again.\n";
        }

        attempts++;

    } while (userGuess != secretNumber);

    return 0;
}

