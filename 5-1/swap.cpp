#include <iostream>
class Circle
{
public:
	int radius;
	Circle();
	~Circle();
};

void swap(Circle& a, Circle& b) {
	Circle tmp;
	tmp = a;
	b = tmp;
}

int main() {

}