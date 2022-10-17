#include <iostream>
using namespace std;

class ArrayUtility2
{
public:
	// s1과 s2를 연결한 새로운 배열을 동적 생성하고 포인터 리턴
	static int* concat(int s1[], int s2[], int size);
	// s1에서 s2에 있는 숫자를 모두 삭제한 새로운 배열을 동적 생성하여 리턴, 리턴하는 배열의 크기는 
	// retSize에 전달, retSize가 0인 경우 NULL 리턴
	static int* remove(int s1[], int s2[], int size, int& retSize);

};

int* ArrayUtility2::concat(int s1[], int s2[], int size)
{
	int* p = new int[2 * size];
	if (!p)return NULL;
	for (int i = 0; i < size; i++)
	{
		p[i] = s1[i];
		p[i + size] = s2[i];
	}
	return p;
}

int* ArrayUtility2::remove(int s1[], int s2[], int size, int& retSize)
{
	int* p = new int[size];
	int k = 0;

	for (int i = 0; i < size; i++)
	{
		int j;
		for (j = 0; j < size; j++)
		{
			if (s1[i] == s2[j])break;
		}
		if (j == size) {
			p[k] = s1[i];
			k++;
		}
	}

	retSize = k;
	if (retSize == 0)return NULL;

	int* p2 = new int[retSize];

	for (int i = 0; i < retSize; i++)p2[i] = p[i];

	delete[] p;
	return p2;
}


int main() {
	int x[5], y[5];

	cout << "정수를 5 개 입력하라. 배열 x에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> x[i];

	cout << "정수를 5 개 입력하라. 배열 y에 삽입한다>>";
	for (int i = 0; i < 5; i++) cin >> y[i];

	int* p = ArrayUtility2::concat(x, y, 5);
	cout << "합친 정수 배열을 출력한다" << endl;
	for (int i = 0; i < 10; i++) cout << p[i] << ' ';
	cout << endl;

	int retSize;
	int* q = ArrayUtility2::remove(x, y, 5, retSize);
	cout << "배열 x[]에서 y[]를 뺀 결과를 출력한다. 개수는 " << retSize << endl;
	for (int i = 0; i < retSize; i++) cout << q[i] << ' ';
	cout << endl;

	delete[] p;
	delete[] q;
}

