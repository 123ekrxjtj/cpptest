#include <iostream>
#include "WordGame.h"
using namespace std;

int main() {
	WordGame* game;
	game = new WordGame("���� �ձ�", "�ƹ���");
	game->run();
	delete game;
}
