#include<iostream>
using namespace std;

void insert_sort(int *data, int size){
    for(int i=1; i<size; ++i){
        for(int j=i; j>=1; --j){
            if(data[j]<data[j-1]){
                swap(data[j],data[j-1]);
            }
        }
    }
    for(int i=0; i<size; ++i){
        cout << data[i] << " ";
    }
}

void bucket_sort(int *data, int size){
    for(int i=0; i<4; ++i){
        int nums = 0;
        for(int j=0; j<size; ++j){
            if(data[j]>=i*25 && data[j]<(i+1)*25){
                nums++;
            }
        }
        int mydata[nums];
        int idx = 0;
        for(int j=0; j<size; ++j){
            if(data[j]>=i*25 && data[j]<(i+1)*25){
                mydata[idx] = data[j];
                idx++;
            }
        }
        insert_sort(mydata,nums);
    }
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    int size = sizeof(data)/sizeof(data[0]);
    bucket_sort(data,size);

    return 0;
}