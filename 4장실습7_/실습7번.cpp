#include <iostream>
using namespace std;

class Circle
{
	int radius;
public:
	void setRadius(int radius);
	double getArea();
};

void Circle::setRadius(int radius) {
	this->radius = radius;
}

double Circle::getArea() {
	return 3.14 * radius * radius;
}
int main() {
	Circle *circle = new Circle[3];
	int temp;
	int big100 = 0;

	for (int i = 0; i < 3; i++)
	{
		cout << "원 " << i + 1 << "의 반지름 >> ";
		cin >> temp;
		circle[i].setRadius(temp);
		if (circle[i].getArea() > 100)big100++;
	}

	cout << "면적이 100보다 큰 원은 " << big100 << "개입니다";
	delete[] circle;
}