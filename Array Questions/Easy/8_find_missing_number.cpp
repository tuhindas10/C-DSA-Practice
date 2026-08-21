#include<iostream>
using namespace std;

int missingNumber(vector<int>& nums) {
        int missingNum;
        for(int i=0; i<=nums.size(); i++) {
            bool present = false;
            for(int j=0; j<nums.size(); j++) {
                if(nums[j] == i) {
                    present = true;
                    break;
                }
            }
            if(!present) {
                missingNum = i;
                break;
            }
        }

    return missingNum;
}

int main(){

    return 0;
}