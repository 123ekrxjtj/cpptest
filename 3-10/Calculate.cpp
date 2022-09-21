#include <iostream>
using namespace std;

class Add
{
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a + b; }
};

class Sub
{
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a - b; }
};

class Mul
{
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() { return a * b; }
};

class Div
{
	int a, b;
public:
	void setValue(int x, int y) { a = x; b = y; }
	int calculate() {
		if (b == 0) {
			cout << "0으로 나눌 수 없음" << endl;
			return 0;
		}
		return a / b;
	};
};


int main() {
	Add a;
	Sub s;
	Mul m;
	Div d;

	int x, y;
	char c;
	

	for (int i = 0; i < 5;i++) {
		int res = 0 ;
		cout << "두 정수와 연산자를 입력하세요 >> ";
		cin >> x >> y >> c;

		switch (c)
		{
		case '+':
			a.setValue(x, y);
			res=a.calculate();
			break;
		case '-':
			s.setValue(x, y);
			res = s.calculate();
			break;
		case '*':
			m.setValue(x, y);
			res = m.calculate();
			break;
		case '/':
			d.setValue(x, y);
			res = d.calculate();
			break;
		}
		cout << res <<endl;
	}
}