#include <iostream>
using namespace std;
#include "Morse.h"

int main() {
	Morse m;
	string text, morse;
	cout << "아래에 영문 텍스트를 입력하세요. 모스 부호로 바꿉니다." << endl;
	getline(cin, text, '\n');
	m.text2Morse(text, morse);
	cout << morse;
}