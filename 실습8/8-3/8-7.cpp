#include <iostream>
using namespace std;

class BaseMemory {
	char* mem;
protected:
	BaseMemory(int size) { mem = new char[size]; }
	void write(int loc, char cmem) { mem[loc] = cmem; }
public:
	char read(int loc) { return mem[loc]; }
};

class ROM : public BaseMemory
{
public:
	ROM(int size, char mem[], int len) : BaseMemory(size) { ; }
};

class RAM : public BaseMemory
{
public:
	RAM(int size) : BaseMemory(size) { ; }
	void write(int loc, char mem){}
};

int main() {
	char x[5] = { 'h', 'e', 'l', 'l', 'o' };
	ROM biosROM(1024 * 10, x, 5); // 10KB의 ROM 메모리. 배열 x로 초기화됨
	RAM mainMemory(1024 * 1024); // 1MB의 RAM 메모리
	// 0 번지에서 4번지까지 biosROM에서 읽어 mainMemory에 복사
	for (int i = 0; i < 5; i++) mainMemory.write(i, biosROM.read(i));
	for (int i = 0; i < 5; i++) cout << mainMemory.read(i);
}