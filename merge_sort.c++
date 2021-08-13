#include<iostream>
#include<vector>
using namespace std;

vector<int> merge_sort(vector<int> nums){
    if(nums.size()>=2){
        int size = (nums.size()+1)/2;
        vector<int> l_nums;
        for(int i=0; i<size; ++i){
            l_nums.push_back(nums[i]);
        }
        l_nums = merge_sort(l_nums);

        vector<int> r_nums;
        for(int i=size; i<nums.size(); ++i){
            r_nums.push_back(nums[i]);
        }
        r_nums = merge_sort(r_nums);

        nums.clear();
        while(l_nums.size()>0 && r_nums.size()>0){
            if(l_nums[0]<r_nums[0]){
                nums.push_back(l_nums[0]);
                l_nums.erase(l_nums.begin());
            }
            else{
                nums.push_back(r_nums[0]);
                r_nums.erase(r_nums.begin());
            }
        }
        for(int i=0; i<l_nums.size(); ++i){
            nums.push_back(l_nums[i]);
        }
        for(int i=0; i<r_nums.size(); ++i){
            nums.push_back(r_nums[i]);
        }
    }
    return nums;    
}

int main(){
    int data[15] = {55, 94, 87, 1, 4, 32, 11, 77, 39, 42, 64, 53, 70, 12, 9};
    vector<int> nums;
    for(int i=0; i<15; ++i){
        nums.push_back(data[i]);
    }
    nums = merge_sort(nums);
    for(int i=0; i<nums.size(); ++i){
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
