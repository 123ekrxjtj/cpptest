#include <iostream>
using namespace std;

class Person
{
	int id;
	string name;
	double weight;
public:
	Person(int id, string name, double weight);
	void show();
};

Person::Person(int id=1, string name="Grace", double weight=20.5) {
	this->id = id;
	this->name = name;
	this->weight = weight;
}

void Person::show()
{
	cout << this->id << " " << this->name << " " << this->weight << endl;
}

int main() {
	Person grace, ashley(2, "Ashley"), helen(3, "Helen", 32.5);
	grace.show();
	ashley.show();
	helen.show();
}
