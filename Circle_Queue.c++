#include<iostream>
using namespace std;

const int maxsize = 500;

class circleQueue{
    public:
        circleQueue(){
            m_front = 0;
            m_back = 0;
        }
        void push(int num){
            if(size()<=maxsize){
                arr[m_back] = num;
                ++m_back;
            }
        }
        void pop(){
            ++m_front;
        }
        int front(){
            return arr[m_front];
        }
        int back(){
            return arr[m_back-1];
        }
        int size(){
            return m_back-m_front;
        }
        bool empty(){
            if(m_back == m_front){
                return true;
            }
            return false;
        }

    public:
        int arr[maxsize];
        int m_front;
        int m_back;
};

int main(){
    circleQueue cq;
    for(int i=1; i<6; ++i){
        cq.push(i);
    }

    cout << cq.size() << endl;

    while(!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    cout << cq.size() << endl;

    return 0;
}