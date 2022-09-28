#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

class Randominteger
{
	int start, end, value;
public:
	Randominteger(int a, int b) {
		srand(time(0));

		start = a;
		end = b;
		int tmp = rand();
		value = start + tmp % (end - start + 1);
	}
	void print() {
		cout << value << endl;
	}
};

int main() {
	

	Randominteger r1(100, 200);
	cout << "100 ~ 200 사이의 랜덤한 숫자 : ";
	r1.print();

	Randominteger r2(400, 600);
	cout << "400 ~ 600 사이의 랜덤한 숫자 : ";
	r2.print();

	Randominteger r3(1500, 2000);
	cout << "1500 ~ 2000 사이의 랜덤한 숫자 : ";
	r3.print();
}