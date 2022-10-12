#include <iostream>
using namespace std;

#include "Person.h"
#include "UpAndDownGame.h"

bool Person::go() {
	int number;
	cout << name + ">>";
	cin >> number;
	return UpAndDownGame::check(number);
}