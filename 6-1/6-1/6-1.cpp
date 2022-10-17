#include <iostream>
using namespace std;

int add(int a[], int n,int b[]=NULL) {
	int res = 0;
	for (int i = 0; i < n; i++)
	{
		res += a[i];
	}
	if (b == NULL)return res;

	for (int i = 0; i < n; i++)
	{
		res += b[i];
	}
	return res;
}

/*
int add(int a[], int n, int b[]) {
	return add(a, n) + add(b, n);
}
*/

int main() {
	int a[] = { 1,2,3,4,5 };
	int b[] = { 6,7,8,9,10 };
	int c = add(a, 5); // �迭 a�� ������ ��� ���� �� ����
	int d = add(a, 5, b); // �迭 a�� b�� ������ ��� ���� �� ����
	cout << c << endl; // 15 ��� 
	cout << d << endl; // 55 ���
}
