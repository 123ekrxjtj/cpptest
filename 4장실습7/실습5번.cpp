#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
	string text;
	srand((unsigned)time(0));
	
	while (true) {
		cout << "�Ʒ��� �� ���� �Է��ϼ��� (exit�� �Է��ϸ� ����) " << endl << ">> ";

		getline(cin, text, '\n');

		if (text == "exit")break;

		int size = text.length();
		int ranIndex = rand() % size;

		char ranChar = 'a' + rand() % 26;
		text[ranIndex] = ranChar;

		cout << text << endl;
	}
}