#include<iostream>
#include<vector>
using namespace std;

void linear_search(vector<int> &nums, int target){
    for(int i=0; i<nums.size(); ++i){
        if(nums[i]==target){
            cout << target << " exists in the array." << endl;
            return;
        }
    }
    cout << target << " doesn't exist in the array." << endl;
    return;
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    vector<int> nums;
    for(int i=0; i<15; ++i){
        nums.push_back(data[i]);
    }

    int target = 32;
    linear_search(nums, target);

    return 0;
}