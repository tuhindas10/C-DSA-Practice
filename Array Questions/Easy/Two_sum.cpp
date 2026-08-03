#include<iostream>
using namespace std;

void twoSum(vector<int>& nums, int k) { //TC -> O(n2)
    for(int i=0; i<nums.size(); i++) {
        for(int j=i+1; j<nums.size(); j++) {
            if(nums[i] + nums[j] == k) {
                cout << nums[i] << " " << nums[j] << endl;
                break;
            }
        }
    }
}



int main() {
    vector<int> v = {2, 6, 5, 8, 11};
    int target = 14;
    twoSum(v, target);

    return 0;
}