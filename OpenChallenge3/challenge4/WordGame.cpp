#include <iostream>
#include "WordGame.h"
#include "Player.h"
using namespace std;

WordGame::WordGame(string title, string startWord) {
	this->title = title;
	this->startWord = startWord;
	this->players = NULL;
}

WordGame::~WordGame() {
	if (this->players != NULL)
		delete[] this->players;
}