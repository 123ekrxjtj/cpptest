#ifndef EXP_H
#define EXP_H

class Exp
{
	int base;	//	베이스
	int exp;	//	지수
public:
	Exp() { base = 1; exp = 1; }
	Exp(int b) { base = b; exp = 1; }
	Exp(int b, int e) { base = b; exp = e; }

	int getValue();
	int getBase() { return base; }
	int getExp() { return exp; }
	bool equals(Exp b);
};

#endif // !EXP_H
