#include <iostream>
#include <string>
using namespace std;

class Person {
    string name;
    string tel;
public:
    string getName() { return name; }
    string getTel() { return tel; }
    void set(string name, string tel) {
        this->name = name;
        this->tel = tel;
    };
};

class PersonManager
{
    Person* p;
    int size;
public:
    PersonManager(int n);
    void show() {
        cout << "모든 사람의 이름은 ";
        for (int i = 0; i < size; i++)
        {
            cout << p[i].getName() << " ";
        }
        cout << endl;
    }
    void search(){
        string tmp;
        cout << "전화번호 검색합니다. 이름을 입력하세요 >> ";
        getline(cin, tmp, '\n');

        for (int i = 0; i < size; i++)
        {
            if (tmp == p[i].getName()) {
                cout << "전화번호는 " << p[i].getTel();
                return;
            }
        }
        cout << "없는 사람입니다";
    }
    ~PersonManager() {
        delete[] p;
    }
};

PersonManager::PersonManager(int n) {
    this->size = n;
    
    p = new Person[n];

    cout << "이름과 전화번호를 입력해주세요"<<endl;

    string tmpName, tmpTel;
    for (int i = 0; i < size; i++)
    {
        cout << "사람 " << i + 1 << " >> ";
        getline(cin, tmpName, ' ');
        getline(cin, tmpTel, '\n');
        p[i].set(tmpName, tmpTel);
    }
}

int main() {
    PersonManager pman(3);
    pman.show();
    pman.search();
}