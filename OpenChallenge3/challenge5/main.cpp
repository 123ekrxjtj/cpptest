#include <iostream>
using namespace std;
#include "Morse.h"

int main() {
	Morse m;
	string text, morse;
	cout << "�Ʒ��� ���� �ؽ�Ʈ�� �Է��ϼ���. �� ��ȣ�� �ٲߴϴ�." << endl;
	getline(cin, text, '\n');
	m.text2Morse(text, morse);
	cout << morse;
}