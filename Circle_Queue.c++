#include<iostream>
using namespace std;

const int maxsize = 5;

class circleQueue{
    public:
        circleQueue(){
            m_front = 0;
            m_back = 0;
        }
        void push(int num){
            if((m_back-m_front)<maxsize){
                arr[m_back%maxsize] = num;
                ++m_back;
            }
            else{
                cout << "The queue is full!" << endl;
            }
        }
        void pop(){
            ++m_front;
        }
        int front(){
            return arr[m_front%maxsize];
        }
        int back(){
            return arr[(m_back-1)%maxsize];
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

    while(!cq.empty()){
        cout << cq.front() << " ";
        cq.pop();
    }
    cout << endl;

    for(int i=1; i<=5; ++i){
        cq.push(i);
        cout << cq.m_front << "   " << cq.m_back << endl;
    }

    cout << cq.size() << endl;

    return 0;
}