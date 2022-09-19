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
			cout << "0���� ���� �� ����" << endl;
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

	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ��� >> ";
		cin >> x >> y >> c;

		switch (c)
		{
		case '+':
			a.setValue(x, y);
			a.calculate();
			break;
		case '-':
			s.setValue(x, y);
			s.calculate();
			break;
		case '*':
			m.setValue(x, y);
			m.calculate();
			break;
		case '/':
			d.setValue(x, y);
			d.calculate();
			break;
		}
	}
}