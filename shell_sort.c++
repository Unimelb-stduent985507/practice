#include<iostream>
using namespace std;

void shell_sort(int *data, int size){
    int step = size/2;
    while(step>=1){
        for(int i=0; i<step; ++i){
            int idx = i;
            while((idx+step)<size){
                idx += step;
            }
            for(int j=0; j<(size/step+1); ++j){
                int idx2 = idx;
                while((idx2-step)>=0){
                    if(data[idx2]<data[idx2-step]){
                        swap(data[idx2],data[idx2-step]);
                    }
                    idx2 -= step;
                }
            }
        }
        step /= 2;
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
    shell_sort(data, size);
    print(data, size);

    return 0;
}