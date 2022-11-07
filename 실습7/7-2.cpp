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
//		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
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
//	Book a("명품 C++", 30000, 500), b("고품 C++", 30000, 500);
//	if (a == 30000) cout << "정가 30000원" << endl;
//	if (a == "명품 C++") cout << "명품 C++ 입니다" << endl;
//	if (a == b)cout << "두 책이 같은 책입니다" << endl;
//
//	Book book("벼룩시장", 0, 50);
//	if (!book)cout << "공짜다" << endl;
//}
//
//bool Book::operator!()
//{
//	bool res = this->price == 0;
//	return res;
//}