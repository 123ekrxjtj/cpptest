//#include <iostream>
//#include <string>
//using namespace std;
//
//class Book
//{
//	string title;
//	int price, pages;
//public:
//	Book(string title = "", int price = 0, int pages = 0) {
//		this->title = title; this->price = price; this->pages = pages;
//	}
//	void show() {
//		cout << title << ' ' << price << "�� " << pages << " ������" << endl;
//	}
//	string getTitle() { return title; }
//	bool operator ==(int price);
//	bool operator ==(string title);
//	bool operator ==(Book book);
//	bool operator !();
//};
//
//bool Book::operator==(int price)
//{
//	bool res = this->price == price;
//	return res;
//}
//
//bool Book::operator==(string title)
//{
//	bool res = this->title == title;
//	return res;
//}
//
//bool Book::operator==(Book book)
//{
//	bool res = this->title == book.title &&
//		this->price == book.price &&
//		this->pages == book.pages;
//	return res;
//}
//
//
//int main() {
//	Book a("��ǰ C++", 30000, 500), b("��ǰ C++", 30000, 500);
//	if (a == 30000) cout << "���� 30000��" << endl;
//	if (a == "��ǰ C++") cout << "��ǰ C++ �Դϴ�" << endl;
//	if (a == b)cout << "�� å�� ���� å�Դϴ�" << endl;
//
//	Book book("�������", 0, 50);
//	if (!book)cout << "��¥��" << endl;
//}
//
//bool Book::operator!()
//{
//	bool res = this->price == 0;
//	return res;
//}