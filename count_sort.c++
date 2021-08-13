#include<iostream>
using namespace std;

void count_sort(int *data, int size){
    int min = data[0], max = data[0];
    for(int i=0; i<size; ++i){
        if(min>data[i]){
            min = data[i];
        }
        if(max<data[i]){
            max = data[i];
        }
    }
    
    int m_size = max - min + 1;
    int my_Count[m_size];
    for(int i=0; i<m_size; ++i){
        my_Count[i] = 0;
    }

    for(int i=0; i<size; ++i){
        ++my_Count[data[i]-min];
    }

    for(int i=0; i<m_size; ++i){
        while(my_Count[i]!=0){
            cout << (i+min) << " ";
            --my_Count[i];
        }
    }
    cout << endl;
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    int size = sizeof(data)/sizeof(data[0]);
    count_sort(data,size);

    return 0;
}