#include <iostream>
using namespace std;

class Circle {
    int radius;
public:
    Circle(int radius = 0) { this->radius = radius; }
    int getRadius() { return radius; }
    void setRadius(int radius) { this->radius = radius; }
    double getArea() { return 3.14 * radius * radius; };
};

class NamedCircle : public Circle
{
    string name;
public:
    NamedCircle() { ; }
    NamedCircle(int radius, string name) : Circle(radius) {
        this->name = name;
    }
    void setName(string name) { this->name = name; }
    string getName() { return this->name; }
    void show() { cout << "�������� " << getRadius() << "�� " << name; }
};

string biggest(NamedCircle c[], int num) {
    if (num <= 0)
        return "";  //  Err
    int big = 0;
    for (int i = 1; i < num; i++)
    {
        if (c[i].getRadius() > c[big].getRadius()) {
            big = i;
        }
    }
    return c[big].getName();
}

int main() {
    NamedCircle pizza[5];
    cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;

    for (int i = 0; i < 5; i++)
    {
        int rad; string name;
        cout << i + 1 << " >> ";
        cin >> rad >> name;
        pizza[i].setName(name);
        pizza[i].setRadius(rad);
    }

    cout << "���� ������ ū ���ڴ� " << biggest(pizza, 5) << "�Դϴ�";
}