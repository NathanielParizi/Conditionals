/*
 * Conditionals.cpp
 *
 *  Created on: Jul 8, 2018
 *      Author: Nathaniel-Joel Parizi
 */

#include <iostream>

using namespace std;

int main() {

	string password = "hello";

	cout << "Enter your password: " << flush;
	string input;
	cin >> input;

	cout << "You have entered '" << input << "'" << endl;

	//Conditional statement

	bool x = 0;
	bool y = 1;

	cout << (x | y) << endl;  //bitwise true
	cout << (x & y) << endl;  //bitwise false

	if (password == input) {  // relative comparison
		cout << "Correct password!" << endl;
	}

	if (password != input) {
		cout << "Access denied!" << endl;
	}

	cout << "Enter a value from 1 - 10 " << endl;
	int num;
	cin >> num;
	if (num >= 1 && num <= 10) {
		cout << "correct entry." << endl;
	} else {
		cout << "incorrect entry" << endl;
	}

	//************Boolean conditionals
	if (x | y) {
		cout << "TRUE" << endl;
	}

	if (!(x & y)) {
		cout << "FALSE" << endl;
	}

	//*************************Character conditionals
	char myChar = 'z';

	if (myChar == 'z') {
		cout << "It is true that '" << myChar << "' is equal to z!" << endl;
	} else {
		cout << "It isn't true that '" << myChar << "' is equal to z!" << endl;
	}

	char userChar;

	cout << "There are two magic letters. Guess one of the magic letters!"
			<< flush;
	cout << "Enter your own char: " << endl;
	cin >> userChar;
	cout << "Your user char is: " << userChar << endl;

	if (userChar == 'a') {
		cout << "Yes, you guess a magic letter correctly." << endl;
	} else if (userChar == 'z') {
		cout << "Yes, you guess a magic letter correctly." << endl;
	} else {
		cout << "No, you guess the magic letter incorrectly." << endl;
	}

	return 0;
}

