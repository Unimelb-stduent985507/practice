#include<iostream>
using namespace std;

void insert_sort(int *data, int size){
    for(int i=1; i<size; ++i){
        for(int j=i; j>=1; --j){
            if(data[j-1]>data[j]){
                swap(data[j-1],data[j]);
            }
        }
    }
}

void print(int *data, int size){
    for(int i=0; i<size; ++i){
        cout << data[i] << " ";
    }
    cout << endl;
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    int size = sizeof(data)/sizeof(data[0]);
    insert_sort(data,size);
    print(data,size);

    return 0;
}