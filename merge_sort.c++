#include<iostream>
#include<vector>
using namespace std;

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    vector<int> nums;
    for(int i=0; i<15; ++i){
        nums.push_back(data[i]);
    }

    vector<int> nums2 = nums;

    for(int i=0; i<nums2.size(); ++i){
        cout << nums2[i] << " ";
    }
    cout << endl;

    return 0;
}