#ifndef MORSE
#define MORSE



#include <iostream>
#include <string>
using namespace std;

class Morse
{
	string alphabet[26];
	string digit[10];
	string slash, question, comma, period,plus, equal;

public:
	Morse();
	void text2Morse(string text, string& morse);
	bool morse2Text(string morse, string& text);
	bool morseWord2Text(string morse, string& text);
	bool morse2Letter(string morseLetter, char& letter);
};

#endif MORSE