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
        cout << "��� ����� �̸��� ";
        for (int i = 0; i < size; i++)
        {
            cout << p[i].getName() << " ";
        }
        cout << endl;
    }
    void search(){
        string tmp;
        cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ��� >> ";
        getline(cin, tmp, '\n');

        for (int i = 0; i < size; i++)
        {
            if (tmp == p[i].getName()) {
                cout << "��ȭ��ȣ�� " << p[i].getTel();
                return;
            }
        }
        cout << "���� ����Դϴ�";
    }
    ~PersonManager() {
        delete[] p;
    }
};

PersonManager::PersonManager(int n) {
    this->size = n;
    
    p = new Person[n];

    cout << "�̸��� ��ȭ��ȣ�� �Է����ּ���"<<endl;

    string tmpName, tmpTel;
    for (int i = 0; i < size; i++)
    {
        cout << "��� " << i + 1 << " >> ";
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