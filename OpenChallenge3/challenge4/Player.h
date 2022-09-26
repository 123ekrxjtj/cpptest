#include <string>
using namespace std;

class Player
{
	string name;
	string word;
public:
	void setName(string name) {
		this->name = name;
	}
	string getName() { return name; }
	string sayWord();
	bool succeed(string lastWord);
};