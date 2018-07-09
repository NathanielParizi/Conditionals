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

	//************Boolean conditionals
	if (x | y) {
		cout << "TRUE" << endl;
	}

	if (!(x & y)) {
		cout << "FALSE" << endl;
	}

	char myChar = 'z';

	if (myChar == 'z') {
		cout << "It is true that '" << myChar << "' is equal to z!" << endl;
	} else {
		cout << "It isn't true that '" << myChar << "' is equal to z!" << endl;
	}

	return 0;
}

