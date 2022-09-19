#include <iostream>
#include <cstring>

using namespace std;

bool checkInputError() {
	if (cin.fail()) {
		cin.clear();
		cin.ignore(10000,'\n');
		return true;
	}
	return false;
}

int main() {
	int num;
	char coffee[100];
	int totSale = 0;
	int tempPrice = 0;

	cout << "���������� 2000��, �Ƹ޸�ī�� 2300��, īǪġ�� 2500��" << endl;
	while (true) {
		cout << "�ֹ� >> ";
		cin >> coffee >> num;
		if (checkInputError())	continue;

		if (strcmp(coffee, "����������") == 0) tempPrice = 2000 * num;
		else if (strcmp(coffee, "īǪġ��") == 0) tempPrice = 2500 * num;
		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) tempPrice = 2300 * num;
		else
		{
			continue;
		}
		cout << tempPrice << "���Դϴ�. ���ְ� �弼��" << endl;
		totSale += tempPrice;
		if (totSale >= 20000) {
			cout << "���� " << totSale << "���� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�" << endl;
			break;
		}
	}
}