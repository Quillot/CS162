#include <cstdio>
#include <iostream>
using namespace std;


string x;

int main(void) {
	// #1 Ask for the user's name
	cout << "Please enter your name: ";
	cin >> x;
	// #2 Print the user's name
	cout << "Hi, " << x << endl;
	// #3 Print user's name with only the first letter revealed
	cout << x[0];
	for(int i = 1; i < sizeof(x) - 1; i++) {
		cout << "#";
	}
	cout << endl;
	// #4 
	// Convert char into an int/ascii representation
	for(int i = 0; i < sizeof(x) - 1; i++) {
		int currChar = int(x[i]);
		// Check if a letter
		if(currChar >= 65 && currChar <= 122) {
			if(isupper(currChar)) {
				int newChar = currChar % 65;
				cout << "Char is caps" << endl;
			}
			else {
				cout << "Char is lower" << endl;
			}
		}
		else {
			cout << to_string(currChar);
		}
	}
}