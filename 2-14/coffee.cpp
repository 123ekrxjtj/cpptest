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

	cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원" << endl;
	while (true) {
		cout << "주문 >> ";
		cin >> coffee >> num;
		if (checkInputError())	continue;

		if (strcmp(coffee, "에스프레소") == 0) tempPrice = 2000 * num;
		else if (strcmp(coffee, "카푸치노") == 0) tempPrice = 2500 * num;
		else if (strcmp(coffee, "아메리카노") == 0) tempPrice = 2300 * num;
		else
		{
			continue;
		}
		cout << tempPrice << "원입니다. 맛있게 드세요" << endl;
		totSale += tempPrice;
		if (totSale >= 20000) {
			cout << "오늘 " << totSale << "원을 판매하여 카페를 닫습니다" << endl;
			break;
		}
	}
}