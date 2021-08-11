#include<iostream>
using namespace std;

void select_sort(int *data, int size){
    for(int i=0; i<size-1; ++i){
        int min = data[i];
        int idx = i;
        for(int j=i+1; j<size; ++j){
            if(min>data[j]){
                min = data[j];
                idx = j;
            }
        }
        swap(data[i],data[idx]);
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
    select_sort(data,size);
    print(data,size);

    return 0;
}