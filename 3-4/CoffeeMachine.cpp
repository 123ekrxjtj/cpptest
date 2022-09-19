#include <iostream>
using namespace std;

#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine(int c, int w, int s) {
	coffee = c;
	water = w;
	sugar = s;
}

void CoffeeMachine::drinkEspresso() {
	if (coffee < 1 || water < 1) {
		return;
	}
	coffee -= 1;
	water -= 1;
}

void CoffeeMachine::drinkAmericano() {
	if (coffee < 1 || water < 2) {
		return;
	}
	coffee -= 1;
	water -= 2;
}

void CoffeeMachine::drinkSugarCoffee() {
	if (coffee < 1 || water < 2||sugar<1) {
		return;
	}
	coffee -= 1;
	water -= 2;
	sugar -= 1;
}

void CoffeeMachine::show() {
	cout << "커피 머신 상태, 커피 : " << coffee << "\t물 : " << water << "\t설탕 : " << sugar<<endl;
}
void CoffeeMachine::fill() {
	coffee = 10;
	water = 10;
	sugar = 10;
}
