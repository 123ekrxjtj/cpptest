#include <iostream>
#include <string>

using namespace std;

int main() {
	string text;
	cout << "문자열 입력 >> ";
	getline(cin, text, '\n');

	int asize = 0;

	for (int i = 0; i < text.length(); i++)
	{
		if (text[i] == 'a')asize++;
	}

	cout << "a가 " << asize << "개 있음";
}