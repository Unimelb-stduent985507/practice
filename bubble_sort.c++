#include<iostream>
using namespace std;

void bubble_sort(int *data, int size){
    for(int i=0; i<size-1; ++i){
        for(int j=size-1; j>i; --j){
            if(data[j]<data[j-1]){
                swap(data[j],data[j-1]);
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
    bubble_sort(data,size);
    print(data,size);

    return 0;
}