#include<iostream>
#include<vector>
using namespace std;

void binary_search(int *data, int left, int right, int target){
    while(left<=right){
        int mid = (left+right)/2;
        if(data[mid]==target){
            cout << "The number exists in the array." << endl;
            return;
        }
        if(data[mid]>target){
            right = mid - 1;
        }
        if(data[mid]<target){
            left = mid + 1;
        }
    }
    cout << "The number doesn't exist in the array." << endl;

    return;    
}

int main(){
    int data[15];
    for(int i=0; i<16; ++i){
        data[i] = i+1;
    }
    int target = 2;
    binary_search(data, 0, 15, target);
    

    return 0;
}