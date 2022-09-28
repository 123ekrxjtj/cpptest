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

bool WordGame::createPlayers() {
	int n;
	cout << title << " 게임을 시작합니다" << endl;
	cout << "게임에 참가하는 인원은 몇명입니까?";
	cin >> n;

	if (n < 2) {
		cout << "인원수는 2 이상입니다 " << endl;
		return false;
	}
	nPlayers = n;
	players = new Player[n];
	if (!players)
		return false;

	string playerName;
	for (int i = 0; i < nPlayers; i++) {
		cout << "참가자의 이름을 입력하세요. 빈칸 없이>>";
		cin >> playerName;
		players[i].setName(playerName);
	}

	return true;
}

void WordGame::run() {
	if (!createPlayers())
		return;

	string lastWord = startWord;
	cout << "시작하는 단어는 " + lastWord + "입니다" << endl;
	int next = 0; 

	while (true) {
		string newWord = players[next].sayWord();

		if (!players[next].succeed(lastWord)) {
			cout << players[next].getName() + "이 졌습니다.";
			break; 
		}
		next++; 
		next %= nPlayers;
	}
}
