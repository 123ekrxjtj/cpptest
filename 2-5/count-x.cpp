#include <iostream>
using namespace std;

int main() {
	char c[100];
	int count = 0;
	cout << " ���ڿ� �Է� >> ";
	cin.getline(c, 100, '\n');

	int i = 0;
	while (true) {
		if (c[i] == '\0')	break;
		if (c[i] == 'x')	count++;
		i++;
	}

	cout << "x ���� >> " << count;

}