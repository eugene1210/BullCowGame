#include <iostream>
#include <string>

using namespace std;

void PrintIntro();
const string GetGuess();
void PrintGuess(const string& Guess);
void PlayGame();
bool AskToPlayAgain();

// the entry point for our application
int main()  {
	
	PrintIntro();
	PlayGame();

	AskToPlayAgain();

	return 0;
}

bool AskToPlayAgain() {
	cout << "Do you want to play again? ";
	string Response = "";
	getline(cin, Response);
	return Response[0] == 'y' || Response[0] == 'Y';
}

void PlayGame() {
	// loop for the number of turns asking for guesses
	constexpr int NUMBER_OF_TURNS = 5;
	for (int count = 0; count < NUMBER_OF_TURNS; count++) {
		const string Guess = GetGuess();
		PrintGuess(Guess);
	}
}

void PrintGuess(const string& Guess) {
	cout << "Your guess was: " << Guess << endl;
	cout << endl;
	return;
}

// get a gues from player
const string GetGuess() {
	cout << "Enter your guess: ";
	string Guess = "";
	getline(cin, Guess);
	return Guess;
}

// introduce the game
void PrintIntro() {
	constexpr int WORLD_LENGTH = 9;

	cout << "Welcome to Bulls and Cows, a fun word game\n"
		 << "Can you guess the "
		 << WORLD_LENGTH
		 << " letter isogram I'm thinking of?\n"
		 << endl;
	return;
}