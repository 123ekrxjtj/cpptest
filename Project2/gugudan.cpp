#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	for (int i = 2; i < 10; i+=2)
	{
		for (int j = 1; j < 10; j++)
		{
			cout << i << " x " << j << " = " << i * j << "\t" << i + 1 << " x " << j << " = " << (i + 1) * j << endl;
		}
		cout << "----------------------------\n";
	}
}