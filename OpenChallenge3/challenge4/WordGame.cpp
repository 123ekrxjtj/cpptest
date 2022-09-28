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
	cout << title << " ������ �����մϴ�" << endl;
	cout << "���ӿ� �����ϴ� �ο��� ����Դϱ�?";
	cin >> n;

	if (n < 2) {
		cout << "�ο����� 2 �̻��Դϴ� " << endl;
		return false;
	}
	nPlayers = n;
	players = new Player[n];
	if (!players)
		return false;

	string playerName;
	for (int i = 0; i < nPlayers; i++) {
		cout << "�������� �̸��� �Է��ϼ���. ��ĭ ����>>";
		cin >> playerName;
		players[i].setName(playerName);
	}

	return true;
}

void WordGame::run() {
	if (!createPlayers())
		return;

	string lastWord = startWord;
	cout << "�����ϴ� �ܾ�� " + lastWord + "�Դϴ�" << endl;
	int next = 0; 

	while (true) {
		string newWord = players[next].sayWord();

		if (!players[next].succeed(lastWord)) {
			cout << players[next].getName() + "�� �����ϴ�.";
			break; 
		}
		next++; 
		next %= nPlayers;
	}
}
