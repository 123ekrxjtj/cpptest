#ifndef COFFEEMACHINE_H
#define COFFEEMACHINE_H

class CoffeeMachine
{
	int coffee, water, sugar;
	// 커피량, 물량, 설탕량

public:
	CoffeeMachine(int c,int w,int s);
	void drinkEspresso();
	void drinkAmericano();
	void show();
	void fill();
	void drinkSugarCoffee();

};

#endif // !COFFEEMACHINE_H
