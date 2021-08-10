#include<iostream>
using namespace std;

void quick_sort(int *data, int size){
    if(size<=0) return;

    //count numbers less than and larger than data[0]
    int left = 0, right = 0;
    for(int i=1; i<size; ++i){
        if(data[i]<data[0]){
            ++left;
        }
        else{
            ++right;
        }
    }

    //make two new arrays
    int data_left[left], data_right[right];
    left = 0, right = 0;
    for(int i=1; i<size; ++i){
        if(data[i]<data[0]){
            data_left[left] = data[i];
            ++left;
        }
        else{
            data_right[right] = data[i];
            ++right;
        }
    }

    //recursion
    quick_sort(data_left, left);
    cout << data[0] << " ";
    quick_sort(data_right, right);
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    int size = sizeof(data)/sizeof(data[0]);
    quick_sort(data, size);
    cout << endl;

    return 0;
}