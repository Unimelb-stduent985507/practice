#include<iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout << "Calling constructor without parameters." << endl;
        }
        Person(int a){
            age = a;
            cout << "Calling constructor with parameters." << endl;
        }
        Person(const Person &p){
            age = p.age;
            cout << "Calling copy constructor." << endl;
        }
        ~Person(){
            cout << "Calling destructor." << endl; 
        }
    private:
        int age;
};

void test01(){
    //Calling constructor without parameters
    Person p;
}

void test02(){
    //Calling constructor with parameters
    //Method 1
    Person p1(10);

    //Method 2
    Person p2 = Person(10);
    Person p3 = Person(p2);

    //Method 3
    Person p4 = 10;
    Person p5 = p4;
}

int main(){
    Person p;
    test01();
    test02();

    return 0;
}