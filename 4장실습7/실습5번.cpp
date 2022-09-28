#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string text;
	srand((unsigned)time(0));
	
	while (true) {
		cout << "아래에 한 줄을 입력하세요 (exit를 입력하면 종료) " << endl << ">> ";

		getline(cin, text, '\n');

		if (text == "exit")break;

		int size = text.length();
		int ranIndex = rand() % size;

		char ranChar = 'a' + rand() % 26;
		text[ranIndex] = ranChar;

		cout << text << endl;
	}
}