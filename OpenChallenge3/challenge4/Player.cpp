#include <iostream>
#include <string>
using namespace std;

#include "Player.h"

string Player::sayWord() {
	cout << name + " >> ";
	cin >> word;
	return word;
}

bool Player::succeed(string lastWord) {
	int lastindex = lastWord.length() - 2;

	if (lastWord.at(lastindex) == word.at(0) &&
		lastWord.at(lastindex + 1) == word.at(1))
		return true;
	else
		return false;
}