#include<iostream>
using namespace std;

void change(int *data, int position, int size){
    if((data[position] > data[2*position+1]) && (2*position+1 < size)){
        int temp = data[position];
        data[position] = data[2*position+1];
        data[2*position+1] = temp;
        change(data, 2*position+1, size);
    }
    if((data[position] > data[2*position+2]) && (2*position+2) < size){
        int temp = data[position];
        data[position] = data[2*position+2];
        data[2*position+2] = temp;
        change(data, 2*position+2, size);
    }
}

void heap_sort(int *data, int size){
    for(int i=size/2-1; i>=0; --i){
        change(data, i, size);
    }

    for(int i=size-1; i>=0; --i){
        cout << data[0] << " ";
        data[0] = data[i];
        change(data, 0, i);
    }
    cout << endl;
}

int main(){
    int data[6] = {4,1,3,7,6,2};
    heap_sort(data, sizeof(data)/sizeof(data[0]));

}