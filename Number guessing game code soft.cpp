#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
	// Welcome to number guessing game

	cout << "\t\t\t\t=======================================================" << endl;
    cout << "\t\t\t\t*\t\t\t\t\t\t      *" << endl;
    cout << "\t\t\t	*\t\tWelcome To Code Guessing Game\t      *" << endl;
    cout << "\t\t\t\t*\t\t\t\t\t\t      *" << endl;
    cout << "\t\t\t\t=======================================================" << endl<<endl;

    int num, guess, tries = 0;
    const int maxAttempts = 10; // Set a maximum number of attempts
    char playAgain;

    srand(time(0)); // Seed random number generator

    do {
        num = rand() % 100 + 1; // Generate a random number between 1 and 100
        tries = 0;
    cout << "\t\t\t\t=======================================================" << endl;
    cout << "\t\t\t\t*\t\t\t\t\t\t      *" << endl;
    cout << "\t\t\t	*\t\tLet`s start the Game                  *" << endl;
    cout << "\t\t\t	*\t\tNOTE!!!!!!!!!!!!!!!!                  *" << endl;
    cout << "\t\t\t	*\tYou Have only 10 chance to Guess              *" << endl;
    cout << "\t\t\t	*\t\tGuess My Number Game                  *" << endl;
    cout << "\t\t\t\t*\t\t\t\t\t\t      *" << endl;
    cout << "\t\t\t\t=======================================================" << endl<<endl;
    
        do {
        	// Input prompt for the user to guess the number
            cout << "\t\t\t\tEnter a guess between 1 and 100: " ;
            cin >> guess;
            tries++;
 // Provide feedback based on the user's guess
            if (guess > num) {
                cout << "\t\t\t\t\t\t -------------" << endl;
                cout << "\t\t\t\t\t\t|  Too high!  |" << endl;
                cout << "\t\t\t\t\t\t -------------" << endl<<endl;
            } else if (guess < num) {
            	cout << "\t\t\t\t\t\t -------------" << endl;
                cout << "\t\t\t\t\t\t|  Too low!  |" << endl;
                cout << "\t\t\t\t\t\t -------------" <<endl<<endl;
            } 
			  // User guessed the correct number
			  else {
                cout << endl;
                cout << "\t\t\t\t  -----------------------------------" << endl;
                cout << "\t\t\t\t |  Correct! You got it in " << tries  << " guesses! |" << endl;
                cout << "\t\t\t\t  -----------------------------------" << endl<<endl;
            }
  // Check if the user has reached the maximum number of attempts
            if (tries == maxAttempts) {
            if (tries == maxAttempts) {
               
                cout << "\t\t\t\t  ---------------------------------------------" << endl;
                cout << "\t\t\t\t |   Out of attempts! The secret number was " << num<<" |" << endl;
                cout << "\t\t\t\t  ---------------------------------------------" << endl<<endl;
			   break;
            }
           
        }} while (guess != num);

cout<<endl;
// Ask if the user wants to play again
     cout << "\t\t\t\t  ------------------------------------" << endl;
     cout << "\t\t\t\t |  Do you want to play again? (y/n):  ";
     cin >> playAgain;
     cout << "\t\t\t\t  -----------------------------------" << endl<<endl;

    } while (playAgain == 'y' || playAgain == 'Y');
     // Farewell message
     cout << "\t\t\t\t  --------------------------------------------------" << endl;
     cout << "\t\t\t\t |  Thanks for playing! Have a great day! Goodbye!  |" << endl;
     cout << "\t\t\t\t  --------------------------------------------------" << endl<<endl;
	return 0;	
}


//Created  by Noor Fatima
//For Internship Task Number Guessing game
//For @softcode
