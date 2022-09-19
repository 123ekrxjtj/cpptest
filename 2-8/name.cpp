#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char name[100];
	char longest[100];
	int longlen = 0;
	int templen = 0;

	for (int i = 0; i < 5; i++) {
		cin.getline(name, 100, ';');
		templen = strlen(name);
		if (templen > longlen) {
			longlen = templen;
			strcpy(longest, name);
		}
	}
	cout << "가장 긴 이름과 길이 >> " << longest << "\t" << longlen << endl;
}