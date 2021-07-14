#include<iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout << "Calling constructor without parameters." << endl;
        }
        Person(int age){
            m_Age = age;
            cout << "Calling constructor with parameters." << endl;
        }
        Person(const Person &p){
            m_Age = p.m_Age;
            cout << "Calling copy constructor." << endl;
        }
        ~Person(){
            cout << "Calling destructor." << endl;
        }
    public:
        int m_Age;
};

void test01(){
    Person p1(20);
    Person p2(p1);
    cout << "The age of p2 is " << p2.m_Age << endl;
}

void doWork(Person p){}

void test02(){
    Person p;
    doWork(p);
}

Person doWork2(){
    Person p;
    return p;
}

void test03(){
    Person p = doWork2();
}

int main(){
    //test01();
    //test02();
    test03();

    return 0;
}