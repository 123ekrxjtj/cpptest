#include <iostream>
#include "WordGame.h"
using namespace std;

int main() {
	WordGame* game;
	game = new WordGame("끝말 잇기", "아버지");
	game->run();
	delete game;
}
