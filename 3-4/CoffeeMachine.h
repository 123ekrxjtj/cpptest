#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine
{
	int coffee, water, sugar;
	// Ŀ�Ƿ�, ����, ������

public:
	CoffeeMachine(int c,int w,int s);
	void drinkEspresso();
	void drinkAmericano();
	void show();
	void fill();
	void drinkSugarCoffee();

};

#endif // !COFFEEMACHINE_H
